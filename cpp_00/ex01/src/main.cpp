/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:28:56 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/28 10:51:12 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.class.hpp"
#include "../include/Contact.class.hpp"
#include "../include/colors.hpp"

int	main(void)
{
	std::string	line;
	PhoneBook	badal_phonebook;
	
	std::cout << BGREEN "Welcome to the PhoneBook application!" RESET << std::endl;
	std::cout << GREEN "Use a command : ADD(create a contact), SEARCH(search a contact) or EXIT" RESET << std::endl;
	std::getline(std::cin, line);
	while(line != "EXIT" && line != "exit")
	{
		if (line == "ADD" || line == "add")
			badal_phonebook.AddNewContact();
		else if (line == "SEARCH" || line == "search")
			badal_phonebook.SearchContact();
		else
			std::cout << RED "Invalid command..." RESET << std::endl;
		std::cout << GREEN "Use a command : ADD(create a contact), SEARCH(search a contact), EXIT" RESET << std::endl;
		getline(std::cin, line);
	}
	return (0);
}
