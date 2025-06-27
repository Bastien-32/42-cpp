/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:34:25 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/27 18:09:29 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include "colors.hpp"
#include "Contact.class.hpp"

class PhoneBook{

private:

	Contact	contacts[8];			// Array of 8 contacts
	int		NbContacts;			// Number of contacts currently stored
	int		index;					// Next contact position

public:

	PhoneBook( void );
	~PhoneBook( void );

	int	getNbContacts(void);

	void	AddNewContact(void);
	void	SearchContact(void) const;
	void	ShowDetails(void) const;
};

#endif