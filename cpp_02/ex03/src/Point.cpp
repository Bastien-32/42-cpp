/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:35:49 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/07 17:59:55 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

Point::Point( void ) :
	_x(0),
	_y(0)
{
}

/* ------------------------------- Destructor ------------------------------- */

Point::~Point( void )
{
}

/* --------------------------- Constructor by copy -------------------------- */

Point::Point( const Point& other ) :
	_x(other._x),
	_y(other._y)
{
	*this = other;
}

/* ------------------------ Assignation operator copy ----------------------- */

Point&	Point::operator=( const Point& other )
{
	// no assignation here because we use const values
	(void)other;
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

Point::Point( const int x, const int y ) :
	_x(x),
	_y(y)
{}

Point::Point( const float x, const int y ) :
	_x(x),
	_y(y)
{}

Point::Point( const int x, const float y ) :
	_x(x),
	_y(y)
{}

Point::Point( const float x, const float y ) :
	_x(x),
	_y(y)
{}

/* --------------------------------- getters -------------------------------- */

Fixed	Point::getFixedX() const
{
	return (this->_x);
}

Fixed	Point::getFixedY() const
{
	return (this->_y);
}

/* --------------------------------- Methods -------------------------------- */

static Fixed	sign( Point const& p1, Point const& p2, Point const& p3 )
{
	return ((p1.getFixedX() - p3.getFixedX()) *
		(p2.getFixedY() - p3.getFixedY()) -
		(p2.getFixedX() - p3.getFixedX()) *
		(p1.getFixedY() - p3.getFixedY()));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	Fixed	d1 = sign(point, a, b);
	Fixed	d2 = sign(point, b, c);
	Fixed	d3 = sign(point, c, a);

	if ((d1 < 0) && (d2 < 0) && (d3 < 0))
		return (1);
	if ((d1 > 0) && (d2 > 0) && (d3 > 0))
		return (1);

	return (0);
}

