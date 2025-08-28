/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:25:59 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/25 17:41:55 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cstdlib>

class Span
{

	private:

		unsigned int		_maxSize;
		std::vector<int>	_vec;

	public:

		Span( void );
		Span( const Span& other );
		Span&	operator =( const Span& other );
		~Span( void );

		Span( unsigned int N );

		void	addNumber( int number );
		int		shortestSpan( void ) const;
		int		longestSpan( void )const;

		void	printNumbers( void ) const;

		template <typename Iterator>
		void	addFromContainer(Iterator begin, Iterator end);

};

template <typename Iterator>
void	Span::addFromContainer(Iterator begin, Iterator end)
{
	if (std::distance(begin, end) + _vec.size() > _maxSize)
		throw std::runtime_error("Cannot add numbers : the vector will exceed its max size");
	_vec.insert(_vec.end(), begin, end);
}

std::vector<int>	fillRandomly(unsigned int quantity, int min, int max);

#endif