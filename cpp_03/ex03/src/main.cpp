/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:57:57 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/21 18:30:21 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	player1;
	std::cout << "player1 ClapName = " << player1.ClapTrap::getName()
				<< " --- DiamondName = " << player1.DiamondTrap::getName() << std::endl;
	std::cout  << "\t hit points = " << player1.getHitPoints()
				<< " --- energy points = " << player1.getEnergyPoints()
				<< " --- attack damage = " << player1.getAttackDamage() << std::endl;
	std::cout << std::endl;

	DiamondTrap	player2("Bobby");
	std::cout << "player2 ClapName = " << player2.ClapTrap::getName()
			<< " --- DiamondName = " << player2.DiamondTrap::getName() << std::endl;
	std::cout  << "\t hit points = " << player2.getHitPoints()
			<< " --- energy points = " << player2.getEnergyPoints()
			<< " --- attack damage = " << player2.getAttackDamage() << std::endl;
	std::cout << std::endl;

	player1.attack(player2.getName());
	std::cout << std::endl;

	ScavTrap player3;
	player3.attack(player2.getName());
	std::cout << std::endl;

	player1.whoAmI();
	std::cout << std::endl;
	
	player2.whoAmI();
	std::cout << std::endl;

	return (0);
}