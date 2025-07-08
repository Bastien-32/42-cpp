/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:25:58 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/08 16:04:28 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};
