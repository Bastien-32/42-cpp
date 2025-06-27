/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:40:22 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/27 18:33:39 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.class.hpp"
#include "../include/Contact.class.hpp"

/* PhoneBook::PhoneBook( void ){

	index = 0;
	NbContacts = 0;
	return ;
} */

PhoneBook::PhoneBook() : NbContacts(0), index(0) {

	return ;
}

PhoneBook::~PhoneBook(){

	return ;
}

int PhoneBook::getNbContacts() {

	return NbContacts ;
}

void PhoneBook::AddNewContact() {

	contacts[index].AddContact();
	index = (index + 1) % 8;
	if (NbContacts < index)
		NbContacts = index;
}

void printTableBorder() {

	std::cout << "+" << std::string(10, '-') << "+"
				<< std::string(10, '-') << "+"
				<< std::string(10, '-') << "+"
				<< std::string(10, '-') << "+" << std::endl;
}

static std::string formatField(const std::string& str) {

	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str;
}

void PhoneBook::ShowDetails() const {

	std::string	index_tab;
	
	std::cout << FGREEN "Enter the index number of the contact to view details or quit(q): " RESET  << std::endl;
	std::getline(std::cin, index_tab);
	if (index_tab == "q" || index_tab == "Q")
		return;
	if (index_tab.empty()) {
		std::cout << RED "Index cannot be empty. Please try again." RESET << std::endl;
		return ShowDetails();
	}
	if (!std::all_of(index_tab.begin(), index_tab.end(), ::isdigit)) {
		std::cout << RED "Enter an index number or q for quit. Please try again." RESET << std::endl;
		return ShowDetails();
	}
	int index = std::stoi(index_tab);
	if (index < 1 || index > NbContacts) {
		std::cout << RED "Enter a contact index number who is existing. Please try again." RESET << std::endl;
		return ShowDetails();
	}
	index -= 1;
	std::cout << "Contact details:\n" << std::endl;
	std::cout << "First Name :\t\t" << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name :\t\t" << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname :\t\t" << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number :\t\t" << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret :\t" << contacts[index].getDarkestSecret() << "\n" << std::endl;
}

void PhoneBook::SearchContact(void) const {

	printTableBorder();
	std::cout << "|" << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|"
				<< std::endl;
	printTableBorder();
	for (int i = 0; i < NbContacts; ++i) {
		std::cout << "|" << std::setw(10) << i + 1 << "|"
					<< std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
					<< std::setw(10) << formatField(contacts[i].getLastName()) << "|"
					<< std::setw(10) << formatField(contacts[i].getNickname()) << "|"
					<< std::endl;
	}
	printTableBorder();
	ShowDetails();
}