/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:42:48 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/09 17:39:59 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"
#include <iostream>

int main( void )
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point p(4, 3);
	if (bsp(a, b, c , p))
		std::cout << "p is in the triangle ABC" << std::endl;
	else
		std::cout << "p is out of the triangle ABC" << std::endl;

	Point d(0, 0);
	Point e(10.02f, 0);
	Point f(0, 10.52f);
	Point pf(4.33f, 3.22f);
	if (bsp(d, e, f , pf))
		std::cout << "pf is in the triangle DEF" << std::endl;
	else
		std::cout << "pf is out of the triangle DEF" << std::endl;

	Point pb(12.33f, 3.22f);
	if (bsp(d, e, f , pb))
		std::cout << "pb is in the triangle DEF" << std::endl;
	else
		std::cout << "pb is out of the triangle DEF" << std::endl;

	return (0);
}