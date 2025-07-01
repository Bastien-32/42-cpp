/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:19:59 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/01 15:01:59 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include "../include/colors.hpp"

#include <iostream>

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << BRED "Usage : ./harlFilter [level]" RESET << std::endl;
		std::cout << FBLACK << "Level valid arguments : DEBUG, INFO, WARNING, ERROR" RESET << std::endl;
		return (1);
	}
	harl.complain(argv[1]);

	return (0);
}
