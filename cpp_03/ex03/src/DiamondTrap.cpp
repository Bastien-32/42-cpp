/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:07:50 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/21 18:05:54 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

#include <iostream>
#include <string>

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

DiamondTrap::DiamondTrap( void ) :
	ClapTrap("Unnamed_clap_name"),
	FragTrap(),
	ScavTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	_name = "Unnamed";
	_hitPoints = FragTrap::getFragTrapHitPoints();
	_energyPoints = ScavTrap::getScavTrapEnergyPoints();
	_attackDamage = FragTrap::getFragTrapAttackDamage();
}

/* ---------------------------- Copy constructor ---------------------------- */

DiamondTrap::DiamondTrap( const DiamondTrap& other ) :
	ClapTrap(other._name + "clap_name")
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

/* ------------------------ Assignation operator copy ----------------------- */

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
{
	std::cout << "DiamondTrap Assignment operator called" << std::endl;
	if ( this != &other )
		ClapTrap::operator=( other );
	return (*this);
}

/* ------------------------------- Destructor ------------------------------- */

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor called for " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

DiamondTrap::DiamondTrap( std::string name ) :
	ClapTrap(name + "_clap_name"),
	FragTrap(),
	ScavTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	_name = name;
	_hitPoints = FragTrap::getFragTrapHitPoints();
	_energyPoints = ScavTrap::getScavTrapEnergyPoints();
	_attackDamage = FragTrap::getFragTrapAttackDamage();
}

/* --------------------------------- getters -------------------------------- */


std::string	DiamondTrap::getName( void ) const
{
	return (_name);
}

/* --------------------------------- Methods -------------------------------- */

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}