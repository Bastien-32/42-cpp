/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:10:18 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 22:46:48 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/ICharacter.hpp"
#include "../include/AMateria.hpp"

#include <iostream>

class Character : public ICharacter
{

	protected:

		AMateria*	_inventory[4];
		std::string	_name;

	public:

		Character( void );
		Character( const Character& other );
		Character&	operator=( const Character& other );
		~Character( void );

		Character( std::string name );

		std::string const&	getName( void ) const;
		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );

};
