/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:52:56 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 22:51:01 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

MateriaSource::MateriaSource( void )
{
	for(int i = 0; i < 4; i++)
		_container[i] = NULL;
}

/* ------------------------ Copy assignment operator ------------------------ */

MateriaSource&	MateriaSource::operator=( const MateriaSource& other )
{
	if ( this != &other )
	{
		for(int i = 0; i < 4; i++)
		{
			if (_container[i])
				delete _container[i];
			if (other._container[i])
				_container[i] = other._container[i]->clone();
			else
				_container[i] = NULL;
		}
	}
	return (*this);
}

/* ---------------------------- Copy constructor ---------------------------- */

MateriaSource::MateriaSource( const MateriaSource& other )
{
	for(int i = 0; i < 4; i++)
	{
		if (other._container[i])
			_container[i] = other._container[i]->clone();
		else
			_container[i] = NULL;
	}
}

/* ------------------------------- Destructor ------------------------------- */

MateriaSource::~MateriaSource( void )
{
	for(int i = 0; i < 4; i++)
	{
		if (_container[i])
		{
			delete _container[i];
			_container[i] = NULL;
		}
	}
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */
/* --------------------------------- getters -------------------------------- */
/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	MateriaSource::learnMateria( AMateria* m )
{
	if (!m)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (!_container[i])
		{
			_container[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const& type )
{
	for(int i = 0; i < 4; i++)
	{
		if (_container[i] && _container[i]->getType() == type)
			return (_container[i]->clone());
	}
	return (NULL);
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */