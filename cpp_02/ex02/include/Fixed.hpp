/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:25:58 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/08 16:05:09 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class	Fixed
{

	private:

	int					_rawBits;
	static const int	_fractionalBits;

	public:

		Fixed();
		Fixed( const Fixed& other );
		~Fixed();
		Fixed&	operator=( const Fixed& other );
		
		Fixed( const int value );
		Fixed( const float value );
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		bool	operator>( const Fixed& other ) const;
		bool	operator<( const Fixed& other ) const;
		bool	operator>=( const Fixed& other ) const;
		bool	operator<=( const Fixed& other ) const;
		bool	operator==( const Fixed& other ) const;
		bool	operator!=( const Fixed& other ) const;

		Fixed	operator+( const Fixed& other ) const;
		Fixed	operator-( const Fixed& other ) const;
		Fixed	operator*( const Fixed& other ) const;
		Fixed	operator/( const Fixed& other ) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed&		min( Fixed& nb1, Fixed& nb2 );
		static const Fixed&	min( const Fixed& nb1, const Fixed& nb2 );
		static Fixed&		max( Fixed& nb1, Fixed& nb2 );
		static const Fixed&	max( const Fixed& nb1, const Fixed& nb2 );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

std::ostream&	operator<<( std::ostream& os, const Fixed& fixed );
