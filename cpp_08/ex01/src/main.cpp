/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:19:19 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/21 18:56:34 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <iostream>

int main()
{
	Span s;
	Span t(5);

	s = t;
	std::cout << s.getN() << std::endl;
	try
	{
		s.addNumber(5);
		s.addNumber(15);
		s.addNumber(-5);
		s.addNumber(7);
		s.addNumber(42);
		s.addNumber(8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	s.printNumbers();
	std::cout << "Longest span = " << s.longestSpan() << std::endl;
	std::cout << "Shortest span = " << s.shortestSpan() << std::endl;

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