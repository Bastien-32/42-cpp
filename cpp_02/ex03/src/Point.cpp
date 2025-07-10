/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:35:49 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/10 10:15:10 by badal-la         ###   ########.fr       */
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
{}

/* ---------------------------- Copy constructor ---------------------------- */

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

/* ------------------------------- Destructor ------------------------------- */

Point::~Point( void )
{}

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

bool	bsp( Point const a, Point const b, Point const c, Point const point );
