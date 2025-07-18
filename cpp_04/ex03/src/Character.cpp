/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:52:41 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/18 14:47:51 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

Character::Character( void ) :
	_name("Unnamed")
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

/* ------------------------ Copy assignment operator ------------------------ */

Character&	Character::operator=( const Character& other )
{
	if ( this != &other )
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

Character::Character( const Character& other )
{
	_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
}

/* ------------------------------- Destructor ------------------------------- */

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

Character::Character( const std::string name ) :
	_name(name)
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = 0;
}

/* --------------------------------- getters -------------------------------- */

std::string const&	Character::getName( void ) const
{
	return(_name);
}

/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	Character::equip( AMateria* m )
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx >= 4)
		return ;
	_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target )
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
