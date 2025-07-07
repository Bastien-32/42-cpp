/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:01:08 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/02 08:50:54 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.class.hpp"
#include "../include/colors.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

std::string Contact::getFirstName() const
{
	return (_firstname);
}

std::string Contact::getLastName() const
{
	return (_lastname);
}

std::string Contact::getNickname() const
{
	return (_nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (_phonenumber);
}

std::string Contact::getDarkestSecret() const
{
	return (_darkestsecret);
}

std::string Contact::_FillString( std::string str )
 {
	std::string	filled_str;

	std::cout << str << " : ";
	std::getline(std::cin, filled_str);
	if (filled_str.empty()) {
		std::cout << RED << str << " cannot be empty. Please try again." RESET << std::endl;
		return (_FillString(str));
	}
	return (filled_str);
}

std::string Contact::_FillNumber( std::string str )
{
	std::string filled_str;

	std::cout << str << " : ";
	std::getline(std::cin, filled_str);
	if (filled_str.empty() || !std::all_of(filled_str.begin(), filled_str.end(), ::isdigit)) {
		std::cout << RED "Phone number must be exactly 10 digits. Please try again." RESET << std::endl;
		return (_FillNumber(str));
	}
	return (filled_str);
}

void	Contact::AddContact( void )
{
	_firstname = _FillString("First name");
	_lastname = _FillString("Last name");
	_nickname = _FillString("Nickname");
	_phonenumber = _FillNumber("Phone number");
	_darkestsecret = _FillString("Darkest secret");
}
