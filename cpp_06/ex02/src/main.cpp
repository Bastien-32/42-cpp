/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:20:38 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/20 11:48:51 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include "../include/Base.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base*	generate(void)
{
	static int r = 0;
	if (!r)
	{
		r = 1;
		std::srand(time(NULL));
	}
	int random = std::rand() % 3;
	switch (random)
	{
		case 0:
			std::cout << "Generated type: A" << std::endl;
			return (new A());
		case 1:
			std::cout << "Generated type: B" << std::endl;
			return (new B());
		case 2:
			std::cout << "Generated type: C" << std::endl;
			return (new C());
		default:
			std::cout << "Unknown type generated" << std::endl;
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (...)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (...)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (...)
	{}
	std::cout << "Unknown type" << std::endl;
}

int main(void)
{
	Base* instance = generate();
	if (!instance)
	{
		std::cerr << "generate() returned NULL!" << std::endl;
		return (1);
	}
	std::cout << "Identifying type using pointer: ";
	identify(instance);
	std::cout << "Identifying type using reference: ";
	identify(*instance);
	delete instance;

	std::cout << std::endl;
	
	instance = generate();
	if (!instance)
	{
		std::cerr << "generate() returned NULL!" << std::endl;
		return (1);
	}
	std::cout << "Identifying type using pointer: ";
	identify(instance);
	std::cout << "Identifying type using reference: ";
	identify(*instance);
	delete instance;

	return (0);
}
