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


