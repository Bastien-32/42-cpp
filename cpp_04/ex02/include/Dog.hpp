/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:03:57 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 10:52:22 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"

#include <iostream>

class Dog : public AAnimal
{

	private:

		Brain*	_brain;

	public:

		Dog( void );
		Dog( const Dog& other );
		Dog&	operator=( const Dog& other );
		~Dog( void );

		void			makeSound( void ) const;
		virtual Brain&	getBrain( void ) const;

};
