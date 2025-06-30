/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:40:22 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/29 12:46:30 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.class.hpp"
#include "../include/Contact.class.hpp"

PhoneBook::PhoneBook() : _NbContacts(0), _index(0)
{}

PhoneBook::~PhoneBook()
{}

int PhoneBook::_getNbContacts() const
{
	return _NbContacts ;
}

void PhoneBook::AddNewContact()
{
	_contacts[_index].AddContact();
	_index = (_index + 1) % 8;
	if (_NbContacts < _index)
		_NbContacts = _index;
}

static void printTableBorder()
{

	std::cout << "+" << std::string(10, '-') << "+"
				<< std::string(10, '-') << "+"
				<< std::string(10, '-') << "+"
				<< std::string(10, '-') << "+" << std::endl;
}

static std::string formatField(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str;
}

void PhoneBook::_ShowDetails() const
{
	std::string	index_tab;
	int			index;
	
	std::cout << FGREEN "Enter the index number of the contact to view details or quit(q): " RESET  << std::endl;
	std::getline(std::cin, index_tab);
	if (index_tab == "q" || index_tab == "Q")
		return;
	if (index_tab.empty()) {
		std::cout << RED "Index cannot be empty. Please try again." RESET << std::endl;
		return _ShowDetails();
	}
	if (!std::all_of(index_tab.begin(), index_tab.end(), ::isdigit)) {
		std::cout << RED "Enter an index number or q for quit. Please try again." RESET << std::endl;
		return _ShowDetails();
	}
	index = std::stoi(index_tab);
	if (index < 1 || index > _NbContacts) {
		std::cout << RED "Enter a contact index number who is existing. Please try again." RESET << std::endl;
		return _ShowDetails();
	}
	index -= 1;
	std::cout << "Contact details:\n" << std::endl;
	std::cout << "First Name :\t\t" << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name :\t\t" << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname :\t\t" << _contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number :\t\t" << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret :\t" << _contacts[index].getDarkestSecret() << "\n" << std::endl;
}

void PhoneBook::SearchContact(void) const
{
	printTableBorder();
	std::cout << "|" << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|"
				<< std::endl;
	printTableBorder();
	for (int i = 0; i < _NbContacts; ++i) {
		std::cout << "|" << std::setw(10) << i + 1 << "|"
					<< std::setw(10) << formatField(_contacts[i].getFirstName()) << "|"
					<< std::setw(10) << formatField(_contacts[i].getLastName()) << "|"
					<< std::setw(10) << formatField(_contacts[i].getNickname()) << "|"
					<< std::endl;
	}
	printTableBorder();
	_ShowDetails();
}
