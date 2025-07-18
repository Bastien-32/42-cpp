/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:07:29 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 14:28:26 by badal-la         ###   ########.fr       */
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

// Cela appelle le constructeur de copie de ClapTrap, qui lui, a le droit d’initialiser _name _hitPoints etc
ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

/* ------------------------ Assignation operator copy ----------------------- */

ScavTrap&	ScavTrap::operator=( const ScavTrap &other )
{
	std::cout << "ScavTrap Assignment operator called" << std::endl;
	if ( this != &other )
		ClapTrap::operator=( other );
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
