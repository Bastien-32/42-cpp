/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:42:48 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/07 17:50:43 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"
#include "../include/colors.hpp"
#include <iostream>

int main( void )
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point p(4, 3);
	if (bsp(a, b, c , p))
		std::cout << BGREEN "p is in the triangle ABC" RESET << std::endl;
	else
		std::cout << BRED "p is out of the triangle ABC"  RESET << std::endl;

	Point d(0, 0);
	Point e(10.02f, 0);
	Point f(0, 10.52f);
	Point pf(4.33f, 3.22f);
	if (bsp(d, e, f , pf))
		std::cout << BGREEN "pf is in the triangle DEF" RESET << std::endl;
	else
		std::cout << BRED "pf is out of the triangle DEF"  RESET << std::endl;

	Point pb(12.33f, 3.22f);
	if (bsp(d, e, f , pb))
		std::cout << BGREEN "pb is in the triangle DEF" RESET << std::endl;
	else
		std::cout << BRED "pb is out of the triangle DEF"  RESET << std::endl;

	return (0);
}