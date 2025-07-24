/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:05:20 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/24 13:41:28 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/colors.hpp"
#include "../include/Weapon.hpp"

#include <iostream>

class HumanB
{

	private:

		Weapon*		_weapon;
		std::string	_name;

	public:

		HumanB( std::string name );
		~HumanB();

		void	attack() const;
		void	setWeapon( Weapon& weapon );

};
