/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:10 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 17:02:50 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

Cat::Cat( void )
{
	std::cout << "Cat Default constructor called" << std::endl;
	type = "Cat";
	_brain = new Brain();

	for (int i = 0; i < 100; i++)
	{
		std::stringstream ss;
		ss << "Cat_idea_" << i;
		_brain->setIdea(i, ss.str());
	}
}

/* ------------------------ Assignation operator copy ----------------------- */

// Delete supprime le _brain alloué lors de la creation de this et on en cree un autre
Cat&	Cat::operator=( const Cat& other )
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
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
Cat::Cat( const Cat& other ) :
	AAnimal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
	type = other.type;
}

/* ------------------------------- Destructor ------------------------------- */

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */
/* --------------------------------- getters -------------------------------- */

Brain&	Cat::getBrain( void ) const
{
	return (*_brain);
}

/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	Cat::makeSound() const
{
	std::cout << type << " said : Miaouw..." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
