/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:10 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 17:02:50 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

WrongAnimal::WrongAnimal( void ) :
	type("Default")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

/* ------------------------ Assignation operator copy ----------------------- */

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other )
{
	std::cout << "WrongAnimal Assignation operator copy called" << std::endl;
	if ( this != &other )
		type = other.type;
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = other;
}

/* ------------------------------- Destructor ------------------------------- */

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */
/* --------------------------------- getters -------------------------------- */

std::string	WrongAnimal::getType( void ) const
{
	return (type);
}
/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	WrongAnimal::makeSound() const
{
	std::cout << type << " said : ..." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
