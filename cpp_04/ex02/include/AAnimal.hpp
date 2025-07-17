/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:07 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 10:54:10 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/Brain.hpp"

#include <iostream>

class AAnimal
{

	protected:

		std::string type;

	public:

		AAnimal( void );
		AAnimal( const AAnimal& other );
		AAnimal&	operator=( const AAnimal& other );
		virtual ~AAnimal( void );

		std::string		getType( void ) const;
		virtual void	makeSound() const = 0;
		virtual Brain&	getBrain() const = 0;

};
