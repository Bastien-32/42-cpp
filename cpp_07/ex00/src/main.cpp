/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:05:19 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/01 10:39:51 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Templates.hpp"

#include <iostream>

int main(void)
{
	int a = 42;
	int b = 21;

	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min of 42 and 21: " << ::min(a, b) << std::endl;
	std::cout << "Max of 42 and 21: " << ::max(a, b) << std::endl;

	std::cout << std::endl;

	double m = 123.456;
	double n = 654.321;

	std::cout << "Before swap: m = " << m << ", n = " << n << std::endl;
	::swap(m, n);
	std::cout << "After swap: m = " << m << ", n = " << n << std::endl;
	std::cout << "Min of 123.456 and 654.321: " << ::min(m, n) << std::endl;
	std::cout << "Max of 123.456 and 654.321: " << ::max(m, n) << std::endl;

	std::cout << std::endl;

	float pi = 3.14f;
	float e  = 2.71f;

	std::cout << "Before swap: pi = " << pi << ", e = " << e << std::endl;
	::swap(pi, e);
	std::cout << "After swap: pi = " << pi << ", e = " << e << std::endl;
	std::cout << "Min of 3.14f and 2.71f: " << ::min(pi, e) << std::endl;
	std::cout << "Max of 3.14f and 2.71f: " << ::max(pi, e) << std::endl;

	std::cout << std::endl;

	char x = 'x';
	char y = 'y';
	std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
	::swap(x, y);
	std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
	std::cout << "Min of 'x' and 'y': " << ::min(x, y) << std::endl;
	std::cout << "Max of 'x' and 'y': " << ::max(x, y) << std::endl;

	std::cout << std::endl;

	std::string aaa = "aaa";
	std::string aab = "aab";
	std::cout << "Before swap: aaa = " << aaa << ", aab = " << aab << std::endl;
	::swap(aaa, aab);
	std::cout << "After swap: aaa = " << aaa << ", aab = " << aab << std::endl;
	std::cout << "Min of 'aaa' and 'aab': " << ::min(aaa, aab) << std::endl;
	std::cout << "Max of 'aaa' and 'aab': " << ::max(aaa, aab) << std::endl;

	return (0);
}

/* int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
} */