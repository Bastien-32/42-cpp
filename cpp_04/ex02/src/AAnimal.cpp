/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:10 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 10:52:41 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

AAnimal::AAnimal( void ) :
	type("Default")
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

/* ------------------------ Assignation operator copy ----------------------- */

AAnimal&	AAnimal::operator=( const AAnimal& other )
{
	std::cout << "AAnimal Assignation operator copy called" << std::endl;
	if ( this != &other )
		type = other.type;
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

AAnimal::AAnimal( const AAnimal& other )
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = other;
}

/* ------------------------------- Destructor ------------------------------- */

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */
/* --------------------------------- getters -------------------------------- */

std::string	AAnimal::getType( void ) const
{
	return (type);
}

/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	AAnimal::makeSound() const
{
	std::cout << type << " said : ..." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
