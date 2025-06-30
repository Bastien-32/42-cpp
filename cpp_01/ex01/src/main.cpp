/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:27:35 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/30 13:14:24 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../include/Zombie.hpp"

int	positive_int(std::string str)
{
	size_t	i;

	i = 0;
	if (str[0] == '+')
		i++;
	for (; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			std::cout << "Error: \"" << str[i] << "\" is not a number." << std::endl;
			return (0);
		}
	}
	return (1);
}

int	main(int argc, char ** argv)
{
	Zombie	*Horde;
	if (argc != 3 || !positive_int(argv[1]))
	{
		std::cout << "Usage : ./Moar_brainz [positive number of zombies] [zombie name]" << std::endl;
		return (1);
	}
	Horde = zombieHorde(std::stoi(argv[1]), argv[2]);
	delete[] Horde;
	return (0);
}