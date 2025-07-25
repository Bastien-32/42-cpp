/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:19:26 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 09:04:49 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

Brain::Brain( void )
{}

/* ------------------------ Assignation operator copy ----------------------- */

Brain&	Brain::operator=( const Brain& other )
{
	if ( this != &other )
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

Brain::Brain( const Brain& other )
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

/* ------------------------------- Destructor ------------------------------- */

Brain::~Brain( void )
{}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */
/* ------------------------------- Constructor ------------------------------ */
/* --------------------------------- getters -------------------------------- */

std::string	Brain::getIdea(const unsigned int i) const
{
	return (_ideas[i]);
}

/* --------------------------------- setters -------------------------------- */

void	Brain::setIdea( int index, const std::string& idea )
{
	_ideas[index] = idea;
}

/* --------------------------------- Methods -------------------------------- */
/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */