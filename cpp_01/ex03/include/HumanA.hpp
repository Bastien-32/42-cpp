/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:05:20 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/08 16:02:22 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/colors.hpp"
#include "../include/Weapon.hpp"

#include <iostream>

class HumanA
{
	
	private:

		Weapon&		_weapon;
		std::string	_name;

	public:

		HumanA( std::string name, Weapon& weapon );
		~HumanA();

		void	attack() const;

};
