/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 12:22:20 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/09 14:39:09 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie( std::string name ) :
	_name(name)
{
	std::cout << "Zombie " << _name << " created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " destroyed." << std::endl;
}

void	Zombie::announce() const
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ... " << std::endl;
}
