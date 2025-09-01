/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:19:19 by badal-la          #+#    #+#             */
/*   Updated: 2025/09/01 14:13:20 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <iostream>

int	main()
{
	Span s;
	Span t(5);
	std::cout << "======== Test with empty Span ========" << std::endl;
	try
	{
		std::cout << "Longest span = " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n======== Test with only one number in Span ========" << std::endl;
	s = t;
	try
	{
		s.addNumber(5);
		std::cout << "Longest span = " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n======== Exceeding Span with addNumber ========" << std::endl;
	try
	{
		s.addNumber(2147483647);
		s.addNumber(-5);
		s.addNumber(7);
		s.addNumber(42);
		s.addNumber(8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n======== Span Test methods ========" << std::endl;
	s.printNumbers();
	try
	{
		std::cout << "Shortest span = " << s.shortestSpan() << std::endl;
		std::cout << "Longest span = " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n======== Big Span ========" << std::endl;
	Span				bigger(10000);
	std::vector<int>	randomValues;

	randomValues = fillRandomly(100, -1000, 1000);
	bigger.addFromContainer(randomValues.begin(), randomValues.end());
	randomValues = fillRandomly(100, 3000, 6000);
	bigger.addFromContainer(randomValues.begin(), randomValues.end());

	std::cout << "Shortest span = " << bigger.shortestSpan() << std::endl;
	std::cout << "Longest span = " << bigger.longestSpan() << std::endl;

	std::cout << "\n======== Exceeding Span with addFromContainer() ========" << std::endl;
	try
	{
		randomValues = fillRandomly(9801, 3000, 6000);
		bigger.addFromContainer(randomValues.begin(), randomValues.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}

/* int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
} */