/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:03:57 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 17:13:48 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/WrongAnimal.hpp"

#include <iostream>

class WrongCat : public WrongAnimal
{

	public:

		WrongCat( void );
		WrongCat( const WrongCat& other );
		WrongCat&	operator=( const WrongCat& other );
		~WrongCat( void );

		void	makeSound() const;
};
