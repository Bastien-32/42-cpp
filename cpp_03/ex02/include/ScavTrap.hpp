/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:06:41 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/15 21:40:49 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

};