/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:12:08 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/30 15:33:48 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/colors.hpp"
#include <iostream>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;
	
	std::cout << GREEN "Memory address of the string variable :\t" << &str << std::endl;
	std::cout << BLUE "Memory address held by stringPTR :\t" << stringPTR << std::endl;
	std::cout << RED "Memory address held by stringREF :\t" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << GREEN "Value of the string variable :\t\t" << str << std::endl;
	std::cout << BLUE "Value pointed by stringPTR :\t\t" << *stringPTR << std::endl;
	std::cout << RED "Value pointed by stringREF :\t\t" << stringREF << RESET << std::endl;

	return (0);
}