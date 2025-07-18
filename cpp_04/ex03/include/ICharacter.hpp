/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:10:18 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 22:47:16 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AMateria;

class ICharacter
{

	public:

		virtual ~ICharacter() {}
		virtual std::string const&	getName( void ) const = 0;
		virtual void				equip( AMateria* m ) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use( int idx, ICharacter& target ) = 0;

};