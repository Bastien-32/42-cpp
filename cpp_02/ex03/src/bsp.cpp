/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:40:38 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/09 11:45:54 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"
#include "../include/Fixed.hpp"

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
		return (true);
	if ((d1 > 0) && (d2 > 0) && (d3 > 0))
		return (true);
	return (false);
}
