/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:29:09 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/19 14:16:18 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main(void)
{
	Bureaucrat	a("Astérix", 10);
	Bureaucrat	b("Obélix", 51);
	Form		d("Laissez passer A-38", 14, 5);
	std::cout << d << std::endl;

	a.signForm(d);
	try
	{
		b.signForm(d);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught 1: " << e.what() << std::endl;
	}

}
