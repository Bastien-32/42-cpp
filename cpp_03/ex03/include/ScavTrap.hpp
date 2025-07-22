/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:06:41 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/22 13:14:32 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{

	private:

		unsigned int	_scavTrapEnergyPoints;
		unsigned int	_scavTrapAttackDamage;
		std::string		_scavTrapName;

	public:

		ScavTrap( void );
		ScavTrap( const ScavTrap& other );
		ScavTrap&	operator=( const ScavTrap &other );
		~ScavTrap( void );

		ScavTrap( std::string name );

		unsigned int	getScavTrapEnergyPoints( void ) const;
		unsigned int	getScavTrapAttackDamage( void ) const;
		std::string		getScavTrapName( void ) const;

		void			attack(const std::string& target);
		void			guardGate( void );

};