/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:13:00 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 22:46:27 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AMateria.hpp"

#include <iostream>

class Ice : public AMateria
{

	public:

		Ice( void );
		Ice( const Ice& other );
		Ice&	operator=( const Ice& other );
		~Ice( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};