#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <algorithm>


class PmergeMe
{
	private:

		std::vector<int>	_vector;
		std::deque<int>		_deque;
		std::vector<int>	FordJohnsonVector( std::vector<int>& vector );
		std::deque<int>		FordJohnsonDeque( std::deque<int>& deque );

	public:

		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		void	parse(char **argv, int argc);
		void	sortVector( void );
		void	sortDeque( void );

		template <typename T>
		void	displayContainer( const T& container ) const
		{
			typename T::const_iterator it = container.begin();
			typename T::const_iterator ite = container.end();

			for (; it != ite; ++it)
			{
				std::cout << *it;
				if (it + 1 != ite)
					std::cout << " ";
			}
			std::cout << std::endl;
		}

};

#endif