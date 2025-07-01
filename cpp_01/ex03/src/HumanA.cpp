/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:38:36 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/30 16:56:40 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
	_weapon(weapon),
	_name(name)
{}

HumanA::~HumanA()
{}

void	HumanA::attack() const
{
	std::cout << BBLUE << _name << RESET
				<< " attacks with their "
				<< BRED << _weapon.getType() << RESET
				<< std::endl;
}