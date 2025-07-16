/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:10 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 17:02:50 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	type = "WrongCat";
}

/* ------------------------ Assignation operator copy ----------------------- */

WrongCat&	WrongCat::operator=( const WrongCat& other )
{
	std::cout << "WrongCat Assignation operator copy called" << std::endl;
	if ( this != &other )
		type = other.type;
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

WrongCat::WrongCat( const WrongCat& other )
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = other;
}

/* ------------------------------- Destructor ------------------------------- */

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */
/* --------------------------------- getters -------------------------------- */
/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	WrongCat::makeSound() const
{
	std::cout << type << " said : Miaouw..." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
