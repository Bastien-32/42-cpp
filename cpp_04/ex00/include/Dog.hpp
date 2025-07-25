/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:03:57 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/22 16:36:29 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/Animal.hpp"

#include <iostream>

class Dog : public Animal
{

	public:

		Dog( void );
		Dog( const Dog& other );
		Dog&	operator=( const Dog& other );
		~Dog( void );

		void	makeSound( void ) const;

};
