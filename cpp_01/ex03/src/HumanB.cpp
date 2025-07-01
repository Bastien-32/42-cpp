/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:38:36 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/30 22:25:42 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) :
	_weapon(NULL),
	_name(name)
{}

HumanB::~HumanB()
{}

void	HumanB::attack() const
{
	if(!_weapon)
	{
		std::cout << BBLUE << _name << RESET
					BRED << " haven't weapon"
					<< std::endl;
	}
	else
	{
		std::cout << BBLUE << _name << RESET
				<< " attacks with their "
				<< BRED << _weapon->getType() << RESET
				<< std::endl;
	}
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}