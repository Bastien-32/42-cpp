/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:25:58 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/09 11:03:53 by badal-la         ###   ########.fr       */
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
		Fixed&	operator=( const Fixed& other );
		~Fixed();
		
		Fixed( const int value );
		Fixed( const float value );
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

std::ostream&	operator<<( std::ostream& os, const Fixed& fixed );
