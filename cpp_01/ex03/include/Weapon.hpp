/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:36:02 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/09 14:44:17 by badal-la         ###   ########.fr       */
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

		const std::string&	getType() const;
		void			setType( std::string weapon_type );

};
