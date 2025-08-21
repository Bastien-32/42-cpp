/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:48:56 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/21 18:57:57 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(void) :
	_N(0),
	_numbers()
{}

Span::Span(const Span& other)
{
	_N = other._N;
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_N = other._N;
		for (unsigned int i = 0; i < _numbers.size(); i++)
			_numbers[i] = other._numbers[i];
	}
	return (*this);
}

Span::~Span(void)
{}

Span::Span( unsigned int N ) :
	_N(N)
{
}

int	Span::getN( void ) const
{
	return (_N);
}

void	Span::printNumbers( void ) const
{
	for (unsigned int i = 0; i < _numbers.size(); i++)
		std::cout << "vector " << i << " = " << _numbers[i] << std::endl;
}

void	Span::addNumber( int number )
{
	static int n = 0;
	n++;
	if (n > static_cast<int>(_N))
		throw std::runtime_error("Out of bound!");
	_numbers.push_back(number);
}

/* int	Span::longestSpan( void )const
{
	int	min = _numbers[0];
	int	max= _numbers[0];

	for (unsigned int i = 1; i < _numbers.size(); i++)
	{
		if (_numbers[i] < min)
			min = _numbers[i];
		if (_numbers[i] > max)
			max = _numbers[i];
	}
	return (abs(max - min));
} */
int	Span::shortestSpan( void )const
{
	std::vector<int> sortedV =_numbers;
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
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to calculate span");
	std::vector<int>::const_iterator itMin = std::min_element(_numbers.begin(), _numbers.end());
	std::vector<int>::const_iterator itMax = std::max_element(_numbers.begin(), _numbers.end());

	return (abs(*itMax - *itMin));
}
