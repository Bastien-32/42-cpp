/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:53:35 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/07 10:16:17 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <iostream>
#include "../include/colors.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug( void )
{
	std::cout << BRED "[ DEBUG ]" RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << BRED "[ INFO ]" RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << BRED "[ WARNING ]" RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << BRED "[ ERROR ]" RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	int			i;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*functions[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error};

	i = 0;
	while (i < 4 && level != levels[i])
		i++;
	switch (i)
	{
		case 0:
			(this->*functions[0])(); // fall through
		case 1:
			(this->*functions[1])(); // fall through
		case 2:
			(this->*functions[2])(); // fall through
		case 3:
			(this->*functions[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;
	}
}
