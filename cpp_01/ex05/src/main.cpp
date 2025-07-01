/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:19:59 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/01 14:50:24 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <iostream>

int main()
{
	Harl harl;

	std::cout << "---- TEST DEBUG ----" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\n---- TEST INFO ----" << std::endl;
	harl.complain("INFO");

	std::cout << "\n---- TEST WARNING ----" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n---- TEST ERROR ----" << std::endl;
	harl.complain("ERROR");

	std::cout << "\n---- TEST UNKNOWN LEVEL ----" << std::endl;
	harl.complain("RANDOM");

	return (0);
}