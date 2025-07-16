/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:06:33 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 15:07:28 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "../include/ClapTrap.hpp"
# include "../include/FragTrap.hpp"
# include "../include/ScavTrap.hpp"
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{

	private:

		std::string	_name;

	public:

		DiamondTrap( void );
		DiamondTrap( const DiamondTrap& other );
		DiamondTrap&	operator=( const DiamondTrap &other );
		~DiamondTrap( void );

		DiamondTrap( std::string name );

		void	whoAmI();

};