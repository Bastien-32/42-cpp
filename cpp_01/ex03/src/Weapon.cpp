/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:35:44 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/30 21:56:48 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

std::string	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string weapon_type)
{
	_type = weapon_type;
}

Weapon::Weapon(std::string type) :
	_type(type)
{}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}