#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe() :
	_vector(),
	_deque()
{}

PmergeMe::PmergeMe(const PmergeMe &other) :
	_vector(other._vector),
	_deque(other._deque)
{}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		_vector = other._vector;
		_deque = other._deque;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{}

void	PmergeMe::parse(char **argv, int argc)
{
	char *endptr;
	for (int i = 1; i < argc; i++)
	{
		long nb = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0' || nb < 0 || nb > 2147483647)
			throw std::runtime_error("Error");
		_vector.push_back(static_cast<int>(nb));
		_deque.push_back(static_cast<int>(nb));
	}
}

std::vector<int>	buildjacobsthalorderVector( int lenMin )
{
	std::vector<int>	jacobsthal_index;
	int j0 = 0;
	int j1 = 1;
	jacobsthal_index.push_back(1);
	while(1)
	{
		int j2 = j1 + 2 * j0;
		if (j2 > lenMin)
			break;
		jacobsthal_index.push_back(j2);
		j0 = j1;
		j1 = j2;
	}

	std::vector<int>	jacobsthal;
	jacobsthal.push_back(1);
	for (size_t i = 1; i < jacobsthal_index.size(); i++)
		for (int j = jacobsthal_index[i]; j > jacobsthal_index[i - 1] ; j--)
			jacobsthal.push_back(j);
	if (static_cast<int>(jacobsthal.size()) < lenMin)
		for (int i = lenMin; i > jacobsthal_index.back(); i--)
			jacobsthal.push_back(i);
	for (size_t i = 0; i < jacobsthal.size(); i++)
		jacobsthal[i]--;
	return (jacobsthal);
}

std::deque<int>	buildjacobsthalorderDeque( int lenMin )
{
	std::deque<int>	jacobsthal_index;
	int j0 = 0;
	int j1 = 1;
	jacobsthal_index.push_back(1);
	while(1)
	{
		int j2 = j1 + 2 * j0;
		if (j2 > lenMin)
			break;
		jacobsthal_index.push_back(j2);
		j0 = j1;
		j1 = j2;
	}

	std::deque<int>	jacobsthal;
	jacobsthal.push_back(1);
	for (size_t i = 1; i < jacobsthal_index.size(); i++)
		for (int j = jacobsthal_index[i]; j > jacobsthal_index[i - 1] ; j--)
			jacobsthal.push_back(j);
	if (static_cast<int>(jacobsthal.size()) < lenMin)
		for (int i = lenMin; i > jacobsthal_index.back(); i--)
			jacobsthal.push_back(i);
	for (size_t i = 0; i < jacobsthal.size(); i++)
		jacobsthal[i]--;
	return (jacobsthal);
}

void	binarySearchInsertVector( std::vector<int> &result, int max, int value )
{
	if (value > result.back())
	{
		result.push_back(value);
		return ;
	}
	std::vector<int>::iterator itTarget;
	itTarget = std::lower_bound(result.begin(), result.end(), max);
	int left = 0;
	int right =  itTarget - result.begin();

	while (left < right)
	{
		int mid = (left + right) / 2;
		if (result[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}
	result.insert(result.begin() + left, value);
}

void	binarySearchInsertDeque( std::deque<int> &result, int max, int value )
{
	if (value > result.back())
	{
		result.push_back(value);
		return ;
	}
	std::deque<int>::iterator itTarget;
	itTarget = std::lower_bound(result.begin(), result.end(), max);
	int left = 0;
	int right =  itTarget - result.begin();

	while (left < right)
	{
		int mid = (left + right) / 2;
		if (result[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}
	result.insert(result.begin() + left, value);
}

std::vector<int>	PmergeMe::FordJohnsonVector( std::vector<int> &vector )
{
	if (vector.size() <= 1)
		return (vector);
	std::vector<int>	min;
	std::vector<int>	max;
	int stock;

	for (size_t i = 0; i < vector.size(); i += 2)
	{
		if (i + 1 < vector.size())
		{
			if (vector[i] < vector[i + 1])
			{
				min.push_back(vector[i]);
				max.push_back(vector[i + 1]);
			}
			else
			{
				min.push_back(vector[i + 1]);
				max.push_back(vector[i]);
			}
		}
		else
			stock = vector[i];
	}

	std::vector<int>	result = FordJohnsonVector(max);

	std::vector<int>	jacobsthal = buildjacobsthalorderVector(min.size());
	for (size_t i = 0; i < jacobsthal.size(); i++)
		binarySearchInsertVector(result, max[jacobsthal[i]], min[jacobsthal[i]]);
	if (vector.size() % 2 != 0)
		binarySearchInsertVector(result, result.back(), stock);
	return (result);
}

std::deque<int>	PmergeMe::FordJohnsonDeque( std::deque<int> &deque )
{
	if (deque.size() <= 1)
		return (deque);
	std::deque<int>	min;
	std::deque<int>	max;
	int stock;

	for (size_t i = 0; i < deque.size(); i += 2)
	{
		if (i + 1 < deque.size())
		{
			if (deque[i] < deque[i + 1])
			{
				min.push_back(deque[i]);
				max.push_back(deque[i + 1]);
			}
			else
			{
				min.push_back(deque[i + 1]);
				max.push_back(deque[i]);
			}
		}
		else
			stock = deque[i];
	}

	std::deque<int>	result = FordJohnsonDeque(max);

	std::deque<int>	jacobsthal = buildjacobsthalorderDeque(min.size());
	for (size_t i = 0; i < jacobsthal.size(); i++)
		binarySearchInsertDeque(result, max[jacobsthal[i]], min[jacobsthal[i]]);
	if (deque.size() % 2 != 0)
		binarySearchInsertDeque(result, result.back(), stock);
	return (result);
}

void	PmergeMe::sortVector( void )
{
	clock_t time_start = clock();
	std::vector<int>	sorted = FordJohnsonVector(_vector);
	clock_t time_end = clock();
	double time_diff = (double)(time_end - time_start) * 1000 / CLOCKS_PER_SEC;

	std::cout << "Before: ";
	displayContainer(_vector);
	std::cout << "\nAfter: ";
	displayContainer(sorted);
	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << time_diff << " ms" << std::endl;
}

void	PmergeMe::sortDeque( void )
{
	clock_t time_start = clock();
	std::deque<int>	sorted = FordJohnsonDeque(_deque);
	clock_t time_end = clock();
	double time_diff = (double)(time_end - time_start) * 1000 / CLOCKS_PER_SEC;

	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " << time_diff << " ms" << std::endl;
}