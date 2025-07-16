/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:03:57 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 18:36:46 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/Animal.hpp"
#include "../include/Brain.hpp"

#include <iostream>

class Dog : public Animal
{

	private:

		Brain*	_brain;

	public:

		Dog( void );
		Dog( const Dog& other );
		Dog&	operator=( const Dog& other );
		~Dog( void );

		void	makeSound() const;
};
