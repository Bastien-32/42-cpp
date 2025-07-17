/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:03:57 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 10:52:12 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"

#include <iostream>

class Cat : public AAnimal
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
