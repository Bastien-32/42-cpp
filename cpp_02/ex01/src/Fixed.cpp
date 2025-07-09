/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:30:49 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/09 11:00:57 by badal-la         ###   ########.fr       */
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

/* ---------------------------- Copy constructor ---------------------------- */

Fixed::Fixed( const Fixed& other )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = other.getRawBits();
}

/* -------------------------- Assignation operator -------------------------- */

Fixed&	Fixed::operator=( const Fixed& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return (*this);
}

/* ------------------------------- Destructor ------------------------------- */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

Fixed::Fixed( int value )
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = value << _fractionalBits;
}

Fixed::Fixed( float value )
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf( value * (1 << _fractionalBits) );
}

/* --------------------------------- Members -------------------------------- */

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(_rawBits) / (1 << _fractionalBits));
}

int	Fixed::toInt( void ) const
{
	return (_rawBits >> _fractionalBits);
}

/* --------------------------------- Getter --------------------------------- */

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

/* --------------------------------- Setter --------------------------------- */
void	Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
}

/* ------------------------ Others methods functions ------------------------ */

std::ostream&	operator<<( std::ostream& os, const Fixed& fixed )
{
	os << fixed.toFloat();
	return (os);
}
