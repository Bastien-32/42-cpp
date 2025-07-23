/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:29:09 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/23 09:34:42 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main(void)
{
	Bureaucrat	a("Astérix", 14);
	Bureaucrat	b("Obélix", 15);
	Form		d("Laissez passer A-38", 14, 5);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << d << std::endl;

	try
	{
		b.signForm(d);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught 1: " << e.what() << std::endl;
	}
	std::cout << d << std::endl;

	a.signForm(d);
	std::cout << d << std::endl;

}
