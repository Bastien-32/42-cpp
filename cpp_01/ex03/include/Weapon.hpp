/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:36:02 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/08 16:02:52 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Weapon
{

	private:

		std::string _type;

	public:

		Weapon( std::string type );
		Weapon();
		~Weapon();

		std::string	getType() const;
		void		setType( std::string weapon_type );

};
