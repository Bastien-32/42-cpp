/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:01:08 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/27 18:33:51 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.class.hpp"
#include "../include/colors.hpp"

Contact::Contact(){

	return ;
}

Contact::~Contact(){

	return ;
}

std::string Contact::getFirstName() const {
	return firstname;
}

std::string Contact::getLastName() const {
	return lastname;
}

std::string Contact::getNickname() const {
	return nickname;
}

std::string Contact::getPhoneNumber() const {
	return phonenumber;
}

std::string Contact::getDarkestSecret() const {
	return darkestsecret;
}

static std::string FillString(std::string str) {
	std::string filled_str;
	std::cout << str << " : ";
	std::getline(std::cin, filled_str);
	if (filled_str.empty()) {
		std::cout << RED << str << " cannot be empty. Please try again." RESET << std::endl;
		return FillString(str);
	}
	return filled_str;
}

static std::string FillNumber(std::string str) {
	std::string filled_str;
	std::cout << str << " : ";
	std::getline(std::cin, filled_str);
	if (filled_str.empty() || !std::all_of(filled_str.begin(), filled_str.end(), ::isdigit)) {
		std::cout << RED "Phone number must be exactly 10 digits. Please try again." RESET << std::endl;
		return FillNumber(str);
	}
	return filled_str;
}

void	Contact::AddContact(void) {

	firstname = FillString("First name");
	lastname = FillString("Last name");
	nickname = FillString("Nickname");
	phonenumber = FillNumber("Phone number");
	darkestsecret = FillString("Darkest secret");
}
