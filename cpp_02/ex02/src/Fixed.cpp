/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:30:49 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/09 11:00:20 by badal-la         ###   ########.fr       */
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
{}

/* ---------------------------- Copy constructor ---------------------------- */

Fixed::Fixed( const Fixed& other )
{
	this->_rawBits = other.getRawBits();
}

/* -------------------------- Assignation operator -------------------------- */

Fixed&	Fixed::operator=( const Fixed& other )
{
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return (*this);
}

/* ------------------------------- Destructor ------------------------------- */

Fixed::~Fixed()
{}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

Fixed::Fixed( int value )
{
	_rawBits = value << _fractionalBits;
}

Fixed::Fixed( float value )
{
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
	return (_rawBits);
}

/* --------------------------------- Setter --------------------------------- */
void	Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
}

/* -------------------------- Other publics methods ------------------------- */

bool	Fixed::operator>( const Fixed& other ) const
{
	return (this->_rawBits > other._rawBits);
}

bool	Fixed::operator<( const Fixed& other ) const
{
	return (this->_rawBits < other._rawBits);
}

bool	Fixed::operator>=( const Fixed& other ) const
{
	return (this->_rawBits >= other._rawBits);
}

bool	Fixed::operator<=( const Fixed& other ) const
{
	return (this->_rawBits <= other._rawBits);
}

bool	Fixed::operator==( const Fixed& other ) const
{
	return (this->_rawBits == other._rawBits);
}

bool	Fixed::operator!=( const Fixed& other ) const
{
	return (this->_rawBits != other._rawBits);
}

Fixed	Fixed::operator+( const Fixed& other ) const
{
	Fixed	result;

	result.setRawBits(this->_rawBits + other._rawBits);
	return (result);
}

Fixed	Fixed::operator-( const Fixed& other ) const
{
	Fixed	result;

	result.setRawBits(this->_rawBits - other._rawBits);
	return (result);
}

Fixed	Fixed::operator*( const Fixed& other ) const
{
	Fixed	result;

	result.setRawBits((this->_rawBits * other._rawBits) / (1 << _fractionalBits));
	return (result);
}

Fixed	Fixed::operator/( const Fixed& other ) const
{
	Fixed	result;

	if (other._rawBits == 0)
	{
		std::cerr << "Error: impossible to divde by zero" << std::endl;
		result.setRawBits(0);
		return (result);
	}
	result.setRawBits(this->_rawBits / other._rawBits);
	return (result);
}

Fixed&	Fixed::operator++()
{
	this->_rawBits += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;

	_rawBits += 1;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->_rawBits -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	_rawBits -= 1;
	return (temp);
}

Fixed& Fixed::min( Fixed& nb1, Fixed& nb2 )
{
	if(nb1.getRawBits() <= nb2.getRawBits())
		return (nb1);
	return (nb2);
}

const Fixed& Fixed::min( const Fixed& nb1, const Fixed& nb2 )
{
	if(nb1.getRawBits() <= nb2.getRawBits())
		return (nb1);
	return (nb2);
}

Fixed& Fixed::max( Fixed& nb1, Fixed& nb2 )
{
	if(nb1.getRawBits() >= nb2.getRawBits())
		return (nb1);
	return (nb2);
}

const Fixed& Fixed::max( const Fixed& nb1, const Fixed& nb2 )
{
	if(nb1.getRawBits() >= nb2.getRawBits())
		return (nb1);
	return (nb2);
}
/* ------------------------ Others methods functions ------------------------ */

std::ostream&	operator<<( std::ostream& os, const Fixed& fixed )
{
	os << fixed.toFloat();
	return (os);
}
