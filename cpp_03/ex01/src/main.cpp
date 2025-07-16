/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:57:57 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 14:16:06 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void)
{
	ClapTrap	player1("Bob");
	ScavTrap	player2("Dan");
	ClapTrap	player3;
	ScavTrap	player4;
	
	player4 = player2;
	std::cout << std::endl;

	player1.attack(player2.getName());
	std::cout << player1.getName() << " have " << player1.getEnergyPoints() << " energy points" << std::endl;
	player1.beRepaired(18);
	std::cout << player1.getName() << " have " << player1.getEnergyPoints() << " energy points" << std::endl;
	std::cout << std::endl;

	player4.takeDamage(12);
	std::cout << player4.getName() << " hit points = " << player4.getHitPoints() << std::endl;
	player4.attack(player3.getName());
	player4.guardGate();
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		player2.attack(player1.getName());
		std::cout << player2.getName() << " have " << player2.getEnergyPoints() << " energy points" << std::endl;
	}
	std::cout << std::endl;
	
	return (0);
}