/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:03:40 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 22:55:26 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/ICharacter.hpp"

#include <iostream>

class AMateria
{

	protected:

		std::string	_type;

	public:

		AMateria( void );
		AMateria( const AMateria& other );
		AMateria&	operator=( const AMateria& other );
		virtual ~AMateria( void );

		AMateria(std::string const & type);

		std::string const & getType( void ) const; //Returns the materia type
		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target );

};