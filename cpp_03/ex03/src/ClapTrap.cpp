/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:29:05 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 14:30:07 by badal-la         ###   ########.fr       */
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
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

/* ------------------------ Assignation operator copy ----------------------- */

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
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

// cette formulation est valable si l'opérateur = est défini
ClapTrap::ClapTrap( const ClapTrap& other )
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

/* ------------------------------- Destructor ------------------------------- */

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called for " << _name << std::endl;
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
	std::cout << "ClapTrap Constructor called for " << name << std::endl;
}

/* --------------------------------- getters -------------------------------- */

std::string	ClapTrap::getName( void ) const
{
	return (_name);
}

unsigned int	ClapTrap::getHitPoints( void ) const
{
	return (_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints( void ) const
{
	return (_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return (_attackDamage);
}


/* --------------------------------- setters -------------------------------- */

void	ClapTrap::setName( std::string name)
{
	_name = name;
}

void	ClapTrap::setHitPoints( unsigned int hitPoints )
{
	_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints( unsigned int energyPoints )
{
	_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage( unsigned int attackDamage )
{
	_attackDamage = attackDamage;
}

/* --------------------------------- Methods -------------------------------- */

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name <<  " is out of energy - Attack denied!" << std::endl;
		return ;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name <<  " is out of hit points - Attack denied!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap "
				<< _name
				<< " attacks "
				<< target
				<< ", causing "
				<< -_attackDamage
				<< " points of damage!"
				<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{

	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name <<  " is out of energy - Repair denied!" << std::endl;
		return ;
	}
	if (_hitPoints <= 0)
	{
		std::cout  << "ClapTrap " << _name <<  "  is out of hit points - Repair denied!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap "
				<< _name
				<< " repair himself with "
				<< amount
				<< " hit points"
				<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap "
				<< _name
				<< " take "
				<< amount
				<< " damage"
				<< std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                Outside class                               */
/* -------------------------------------------------------------------------- */
