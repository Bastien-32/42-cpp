/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:29:05 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/10 11:54:30 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

ClapTrap::ClapTrap( void ) :
	_name("Unnamed"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* ------------------------ Assignation operator copy ----------------------- */

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &other )
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

ClapTrap::ClapTrap( const ClapTrap& other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

/* ------------------------------- Destructor ------------------------------- */

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

ClapTrap::ClapTrap( std::string name ) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Constructor called for " << name << std::endl;
}



/* --------------------------------- getters -------------------------------- */
/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
	{
		std::cout << _name <<  "Energy = 0 - Can't attack" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap "
				<< _name
				<< " attacks "
				<< target
				<< ", causing "
				<< -_hitPoints
				<< " points of damage!"
				<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << _name <<  "Energy = 0 - Can't repaired" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap "
				<< _name
				<< " repair himself with "
				<< amount
				<< "hit points"
				<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= _attackDamage;
	std::cout << "ClapTrap "
				<< _name
				<< " take "
				<< amount
				<< "damage"
				<< std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Outside class                               */
/* -------------------------------------------------------------------------- */
