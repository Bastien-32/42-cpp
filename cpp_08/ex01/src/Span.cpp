/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:48:56 by badal-la          #+#    #+#             */
/*   Updated: 2025/09/01 13:19:05 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(void) :
	_maxSize(0),
	_vec()
{}

Span::Span(const Span& other) :
	_maxSize(other._maxSize),
	_vec(other._vec)
{}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_vec = other._vec;
	}
	return (*this);
}

Span::~Span(void)
{}

Span::Span( unsigned int N ) :
	_maxSize(N),
	_vec()
{}

void	Span::printNumbers( void ) const
{
	for (unsigned int i = 0; i < _vec.size(); i++)
		std::cout << "vector " << i << " = " << _vec[i] << std::endl;
}

void	Span::addNumber( int number )
{
	if (_vec.size() >= _maxSize)
		throw std::runtime_error("Cannot add numbers : the vector will exceed its max size");
	_vec.push_back(number);
}

int	Span::shortestSpan( void )const
{
	if (_vec.size() < 2)
		throw std::runtime_error("Not enough numbers to calculate span");
	std::vector<int> sortedV =_vec;
	std::sort(sortedV.begin(), sortedV.end());
	int shortest = INT_MAX;
	
	for (unsigned int i = 0; i < sortedV.size() - 1; i++)
	{
		int span = sortedV[i + 1] - sortedV[i];
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
}

int	Span::longestSpan( void )const
{
	if (_vec.size() < 2)
		throw std::runtime_error("Not enough numbers to calculate span");
	
	std::vector<int>::const_iterator itMin = std::min_element(_vec.begin(), _vec.end());
	std::vector<int>::const_iterator itMax = std::max_element(_vec.begin(), _vec.end());

	long n = static_cast<long>(*itMax) - static_cast<long>(*itMin);
	if (n > INT_MAX)
		throw std::runtime_error("The longest span is too big to be represented by an int");

	return (abs(*itMax - *itMin));
}

std::vector<int>	fillRandomly(unsigned int quantity, int min, int max)
{
	std::vector<int> vector;
	
	srand(time(NULL));
	for (unsigned int i = 0; i < quantity; i++)
	{
		int randomNum = rand() % (max - min + 1) + min;
		vector.push_back(randomNum);
	}
	return (vector);
}