/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:06:41 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/22 13:19:22 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{

	private:

	public:

		ScavTrap( void );
		ScavTrap( const ScavTrap& other );
		ScavTrap&	operator=( const ScavTrap &other );
		~ScavTrap( void );

		ScavTrap( std::string name );

		void	attack(const std::string& target);
		void	guardGate( void );

};