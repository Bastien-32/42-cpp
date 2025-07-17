/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:03:57 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 08:40:44 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/Animal.hpp"
#include "../include/Brain.hpp"

#include <iostream>

class Cat : public Animal
{

	private:

		Brain*	_brain;

	public:

		Cat( void );
		Cat( const Cat& other );
		Cat&	operator=( const Cat& other );
		~Cat( void );

		void	makeSound() const;
		Brain&	getBrain( void ) const;

};
