/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:07:29 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 12:01:29 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FlagTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

FlagTrap::FlagTrap( void ) :
	ClapTrap("Unnamed")
{
	std::cout << "FlagTrap : Default constructor FlagTrap called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

/* ---------------------------- Copy constructor ---------------------------- */

// Cela appelle le constructeur de copie de ClapTrap, qui lui, a le droit d’initialiser _name _hitPoints etc
FlagTrap::FlagTrap( const FlagTrap& other ) : ClapTrap(other)
{
	std::cout << "FlagTrap : Copy constructor FlagTrap called" << std::endl;
}

/* ------------------------ Assignation operator copy ----------------------- */

FlagTrap&	FlagTrap::operator=( const FlagTrap &other )
{
	std::cout << "FlagTrap : Assignment operator called" << std::endl;
	if ( this != &other )
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

/* ------------------------------- Destructor ------------------------------- */

FlagTrap::~FlagTrap( void )
{
	std::cout << "FlagTrap : Destructor called for " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

FlagTrap::FlagTrap( std::string name ) :
	ClapTrap(name)
{
	std::cout << "FlagTrap : Constructor called for " << name << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

void	FlagTrap::highFivesGuys(void)
{
	std::cout << _name << " raises his hand and says: \"Give me five, bro!\"" << std::endl;
}
