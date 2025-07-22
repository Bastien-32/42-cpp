/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:29:09 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/22 17:30:58 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	a;
	Bureaucrat	b("Josh", 15);
	Bureaucrat	c(b);
	Bureaucrat	d;
	d = b;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	e("Bob", 2);
		e.incrementGrade();
		e.incrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught 1: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	f("Gérard", 149);
		f.decrementGrade();
		f.decrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught 2: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat g("Bob", 221);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught 3: " << e.what() << std::endl;
	}
}
