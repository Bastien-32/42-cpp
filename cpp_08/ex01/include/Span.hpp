/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:25:59 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/20 17:47:56 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{

	private:

		unsigned int		_N;
		std::vector<int>	_numbers;

	public:

		Span( void );
		Span( const Span& other );
		Span&	operator =( const Span& other );
		~Span( void );

		Span( unsigned int N );

		void	addNumber( int numbers );

		int		shortestSpan( void ) const;
		int		longestSpan( void )const;
		Span&	fillRandomly(unsigned int quantity );

};

#endif