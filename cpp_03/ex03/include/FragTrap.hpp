/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:06:41 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/21 18:10:24 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{

	private:

		unsigned int	_fragTrapHitPoints;
		unsigned int	_fragTrapAttackDamage;

	public:

		FragTrap( void );
		FragTrap( const FragTrap& other );
		FragTrap&	operator=( const FragTrap &other );
		~FragTrap( void );

		FragTrap( std::string name );

		unsigned int		getFragTrapHitPoints( void ) const;
		unsigned int		getFragTrapAttackDamage( void ) const;
		void				highFivesGuys( void );

};