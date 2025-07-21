/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:07:29 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/21 18:12:46 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

FragTrap::FragTrap( void ) :
	ClapTrap("Unnamed"),
	_fragTrapHitPoints(100),
	_fragTrapAttackDamage(30)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

/* ---------------------------- Copy constructor ---------------------------- */

// Cela appelle le constructeur de copie de ClapTrap, qui lui, a le droit d’initialiser _name _hitPoints etc
FragTrap::FragTrap( const FragTrap& other ) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

/* ------------------------ Assignation operator copy ----------------------- */

FragTrap&	FragTrap::operator=( const FragTrap &other )
{
	std::cout << "FragTrap Assignment operator called" << std::endl;
	if ( this != &other )
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		_fragTrapHitPoints = other._hitPoints;
		_fragTrapAttackDamage = other._attackDamage;
	}
	return (*this);
}

/* ------------------------------- Destructor ------------------------------- */

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called for " << _name << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

/// @brief 
/// @param name 
FragTrap::FragTrap( std::string name ) :
	ClapTrap(name),
	_fragTrapHitPoints(100),
	_fragTrapAttackDamage(30)
{
	std::cout << "FragTrap Constructor called for " << name << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

/* --------------------------------- Getters -------------------------------- */

unsigned int		FragTrap::getFragTrapHitPoints( void ) const
{
	return (_fragTrapHitPoints);
}

unsigned int		FragTrap::getFragTrapAttackDamage( void ) const
{
	return (_fragTrapAttackDamage);
}

/* --------------------------------- Methods -------------------------------- */

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << _name << " raises his hand and says: \"Give me five, bro!\"" << std::endl;
}
