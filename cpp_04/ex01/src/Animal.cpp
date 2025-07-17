/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:10 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 17:02:50 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

Animal::Animal( void ) :
	type("Default")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

/* ------------------------ Assignation operator copy ----------------------- */

Animal&	Animal::operator=( const Animal& other )
{
	std::cout << "Animal Assignation operator copy called" << std::endl;
	if ( this != &other )
		type = other.type;
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

Animal::Animal( const Animal& other )
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

/* ------------------------------- Destructor ------------------------------- */

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */
/* --------------------------------- getters -------------------------------- */

std::string	Animal::getType( void ) const
{
	return (type);
}


/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	Animal::makeSound() const
{
	std::cout << type << " said : ..." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
