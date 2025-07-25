/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:57:57 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/21 15:29:55 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	ClapTrap	player1("Bob");
	ScavTrap	player2("Dylan");
	FragTrap	player3("Jimmy");
	FragTrap	player4;

	std::cout << std::endl;
	player4 = player3;
	player4.setName("Hendriix");
	std::cout << std::endl;
	
	player3.attack(player2.getName());
	player3.beRepaired(15);
	player4.highFivesGuys();
	std::cout << std::endl;
	
	std::cout << player1.getName()
				<< " have " << player1.getHitPoints() << " hits points, "
				<< player1.getEnergyPoints() << " energy points and "
				<< player1.getAttackDamage() << " attack dammage." << std::endl;
	std::cout << player2.getName()
				<< " have " << player2.getHitPoints() << " hits points, "
				<< player2.getEnergyPoints() << " energy points and "
				<< player2.getAttackDamage() << " attack dammage." << std::endl;
	std::cout << player3.getName()
				<< " have " << player3.getHitPoints() << " hits points, "
				<< player3.getEnergyPoints() << " energy points and "
				<< player3.getAttackDamage() << " attack dammage." << std::endl;
	std::cout << player4.getName()
				<< " have " << player4.getHitPoints() << " hits points, "
				<< player4.getEnergyPoints() << " energy points and "
				<< player4.getAttackDamage() << " attack dammage." << std::endl;
	std::cout << std::endl;

	return (0);
}