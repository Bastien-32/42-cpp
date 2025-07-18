/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:13:42 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 22:46:37 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AMateria.hpp"

#include <iostream>

class Cure : public AMateria
{

	public:

		Cure( void );
		Cure( const Cure& other );
		Cure&	operator=( const Cure& other );
		~Cure( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};