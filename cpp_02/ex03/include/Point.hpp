/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:24:26 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/07 17:51:37 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "../include/Fixed.hpp"
# include <iostream>

class Point
{

	private:

		Fixed const	_x;
		Fixed const	_y;
		

	public:

		Point( void );
		Point( const Point& other );
		Point&	operator=( const Point& other );
		~Point( void );

		Point( const int x, const int y);
		Point( const float x, const int y);
		Point( const int x, const float y);
		Point( const float x, const float y);

		Fixed	getFixedX() const;
		Fixed	getFixedY() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif