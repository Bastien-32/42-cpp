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

std::vector<int>	PmergeMe::getVector( void ) const
{
	return (_vector);
}

std::deque<int>	PmergeMe::getDeque( void ) const
{
	return (_deque);
}

std::vector<int>	buildjacobsthalorder( int lenMin )
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

/* void	binarySearchInsert( std::vector<int> &result, int value )
{
	
	if (result.size() <= 1)
	{
		result.insert(result.begin(), value);
		return ;
	}
	if (result.size() == 2)
	{
		if (value < result[0])
			result.insert(result.begin(), value);
		else
			result.insert(result.begin() + 1, value);
		return ;
	}

	int left = 0;
	int right = result.size() - 1;

	while (left < right)
	{
		int mid = (left + right) / 2;
		if (result[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}
	result.insert(result.begin() + left, value);

} */

void	binarySearchInsert( std::vector<int> &result, int max, int value )
{
	
	if (result.size() <= 1)
	{
		result.insert(result.begin(), value);
		return ;
	}
	if (result.size() == 2)
	{
		if (value < result[0])
			result.insert(result.begin(), value);
		else
			result.insert(result.begin() + 1, value);
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

std::vector<int>	PmergeMe::dispatchMinMax( std::vector<int> &vector )
{
	if (vector.size() <= 1)
		return (vector);
	std::vector<int>	min;
	std::vector<int>	max;

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
			min.push_back(vector[i]);
	}
	for (size_t i = 0; i < min.size(); i++)
	{
		if (i > max.size() - 1)
			std::cout << "Max[" << i << "] = - Min[" << i << "] = " << min[i] << std::endl;
		else
			std::cout << "Max[" << i << "] = " << max[i] << " Min[" << i << "] = " << min[i] << std::endl;
	}
	std::vector<int>	result = dispatchMinMax(max);
	std::vector<int>	jacobsthal = buildjacobsthalorder(min.size());
	std::cout << "Jacobsthal order: ";
	displayContainer(jacobsthal);
	std::cout << std::endl;
	
	for (size_t i = 0; i < min.size(); i++)
	{
		std::cout << "Result vector befor binary insert: ";
		displayContainer(result);
		std::cout << std::endl;
		std::cout << "min to insert = " << min[jacobsthal[i]] << std::endl;
		binarySearchInsert(result, max[jacobsthal[i]], min[jacobsthal[i]]);
		// binarySearchInsert(result, min[jacobsthal[i]]);
	}
	return (result);
}

void	PmergeMe::sortVector( void )
{
	clock_t time_start = clock();
	std::vector<int>	sorted = dispatchMinMax(_vector);
	clock_t time_end = clock();
	double time_diff = (double)(time_end - time_start) * 1000 / CLOCKS_PER_SEC;

	std::cout << "Before: ";
	displayContainer(_vector);
	std::cout << "\nAfter: ";
	displayContainer(sorted);
	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << time_diff << " ms" << std::endl;
}
