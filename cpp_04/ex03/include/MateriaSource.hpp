/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:47:33 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 22:48:17 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AMateria.hpp"
#include "../include/IMateriaSource.hpp"

#include <iostream>

class MateriaSource : public IMateriaSource
{

	private:

		AMateria*	_container[4];

	public:

		MateriaSource( void );
		MateriaSource( const MateriaSource& other );
		MateriaSource&	operator=( const MateriaSource& other );
		~MateriaSource( void );

		void		learnMateria( AMateria* m );
		AMateria*	createMateria( std::string const& type );

};