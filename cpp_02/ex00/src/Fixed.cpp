/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:30:49 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/08 16:40:54 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default constructor -------------------------- */

Fixed::Fixed() :
	_rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* -------------------------- Constructor of recopy ------------------------- */

Fixed::Fixed( const Fixed& other ) :
	_rawBits(other.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

/* ------------------------------- Destructor ------------------------------- */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* ------------------------ copy assignment operator ------------------------ */

Fixed& Fixed::operator=( const Fixed& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_rawBits = other.getRawBits();
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* --------------------------------- Getter --------------------------------- */

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

/* --------------------------------- Setter --------------------------------- */
void Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
}
