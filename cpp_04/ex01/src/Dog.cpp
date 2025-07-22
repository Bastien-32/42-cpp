/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:10 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 17:02:50 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

Dog::Dog( void )
{
	std::cout << "Dog Default constructor called" << std::endl;
	type = "Dog";
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
	{
		std::stringstream ss;
		ss << "Dog_idea_" << i;
		_brain->setIdea(i, ss.str());
	}
}

/* ------------------------ Copy assignment operator ------------------------ */

// Delete supprime le _brain alloué lors de la creation de this et on en cree un autre
Dog&	Dog::operator=( const Dog& other )
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if ( this != &other )
	{
		type = other.type;
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

/* ---------------------------- Copy constructor ---------------------------- */

// On cree un nouveau _brain pour avoir 2 brain differents et ainsi que this._brain ne pointe pas sur celui de other
Dog::Dog( const Dog& other ) :
	Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
	type = other.type;
}

/* ------------------------------- Destructor ------------------------------- */

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */
/* --------------------------------- getters -------------------------------- */

Brain&	Dog::getBrain( void ) const
{
	return (*_brain);
}

/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	Dog::makeSound( void ) const
{
	std::cout << type << " said : Waouff..." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
