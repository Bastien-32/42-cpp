/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:12:08 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/30 22:25:33 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/colors.hpp"
#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"
#include <iostream>

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
/* int main(void)
{

	Weapon	axe("Axe");

	// HumanA on defini weapon par référence 
	// car il est initialisé dès le debut est n'est donc jamais (null)
	HumanA bob("Bob", axe);
	bob.HumanA::attack();

	// HumanB on defini weapon par pointeur
	// car l'arme n'est pas forcement set au debut
	// et weapon peut donc etre null
	// (ce qui est impossible par reference)
	Weapon bow("Bow");
	HumanB dylan("Dylan");
	dylan.HumanB::attack();

	dylan.HumanB::setWeapon(bow);
	dylan.HumanB::attack();

	return (0);
} */