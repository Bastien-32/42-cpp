/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:05:19 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/01 10:30:38 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Templates.hpp"

#include <iostream>

int main(void)
{
	int a = 42;
	int b = 21;

	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min of 42 and 21: " << ::min(a, b) << std::endl;
	std::cout << "Max of 42 and 21: " << ::max(a, b) << std::endl;

	std::cout << std::endl;

	char x = 'x';
	char y = 'y';
	std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
	swap(x, y);
	std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
	std::cout << "Min of 'x' and 'y': " << ::min(x, y) << std::endl;
	std::cout << "Max of 'x' and 'y': " << ::max(x, y) << std::endl;

	std::cout << std::endl;

	std::string aaa = "aaa";
	std::string aab = "aab";
	std::cout << "Before swap: aaa = " << aaa << ", aab = " << aab << std::endl;
	swap(aaa, aab);
	std::cout << "After swap: aaa = " << aaa << ", aab = " << aab << std::endl;
	std::cout << "Min of 'aaa' and 'aab': " << ::min(aaa, aab) << std::endl;
	std::cout << "Max of 'aaa' and 'aab': " << ::max(aaa, aab) << std::endl;

	return (0);
}