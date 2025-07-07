/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:07:19 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/02 09:02:33 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horde;

	horde = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		std::stringstream	ss;
		ss << "_" << i;
		horde[i].setname(name + ss.str());
		horde[i].announce();
	}
	return (horde);
}