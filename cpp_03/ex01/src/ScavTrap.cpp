/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:07:29 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/22 09:29:17 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

ScavTrap::ScavTrap( void ) :
	ClapTrap("Unnamed")
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

/* ---------------------------- Copy constructor ---------------------------- */

ScavTrap::ScavTrap( const ScavTrap& other ) :
	ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

/* ------------------------ Assignation operator copy ----------------------- */

ScavTrap&	ScavTrap::operator=( const ScavTrap &other )
{
	std::cout << "ScavTrap Copy Assignment operator called" << std::endl;
	if ( this != &other )
	{
		ClapTrap::operator=( other );
		_hitPoints = 100;
		_energyPoints = 50;
		_attackDamage = 20;
	}
	return (*this);
}

/* ------------------------------- Destructor ------------------------------- */

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called for " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

ScavTrap::ScavTrap( std::string name ) :
	ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called for " << name << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

/* --------------------------------- Methods -------------------------------- */

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << _name << " has entered in Gate Keeper mode!" << std::endl;
}
