/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:36:02 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/30 21:57:31 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{

	private:

		std::string _type;

	public:

		Weapon(std::string type);
		Weapon();
		~Weapon();

		std::string	getType() const;
		void		setType(std::string weapon_type);

};

#endif