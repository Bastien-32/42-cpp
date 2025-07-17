/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:10:18 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 12:52:03 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AMateria.hpp"

#include <iostream>

class ICharacter
{

	public:

		ICharacter( void );
		ICharacter( const ICharacter& other );
		ICharacter&	operator=( const ICharacter& other );
		~ICharacter( void );

		virtual ~ICharacter() {}
		virtual std::string const&	getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;

};