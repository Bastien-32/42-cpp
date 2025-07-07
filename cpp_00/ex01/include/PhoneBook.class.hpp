/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:34:25 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/07 09:46:08 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cctype>
#include "colors.hpp"
#include "Contact.class.hpp"

class PhoneBook
{

	private:

		Contact	_contacts[8];
		int			_NbContacts;
		int			_index;

		int			_getNbContacts( void ) const;
		void		_ShowDetails( void ) const;
		std::string	_formatField(const std::string& str) const;
		
	public:
		
		PhoneBook( void );
		~PhoneBook( void );

		void		AddNewContact( void );
		void		SearchContact( void ) const;

};

#endif