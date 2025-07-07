/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:25:58 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/03 17:46:31 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

std::ostream&	operator<<( std::ostream& os, const Fixed& fixed );

#endif