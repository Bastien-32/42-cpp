/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:06:41 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 14:50:47 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{

	private:

	public:

		FragTrap( void );
		FragTrap( const FragTrap& other );
		FragTrap&	operator=( const FragTrap &other );
		~FragTrap( void );

		FragTrap( std::string name );

		void	highFivesGuys(void);

};