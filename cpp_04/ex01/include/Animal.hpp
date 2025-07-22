/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:07 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 17:01:39 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/Brain.hpp"

#include <iostream>
#include <cstdlib>

class Animal
{

	protected:

		std::string type;

	public:

		Animal( void );
		Animal( const Animal& other );
		Animal&	operator=( const Animal& other );
		virtual ~Animal( void );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
		virtual Brain&	getBrain( void ) const;

};
