/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:07 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/16 17:01:39 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{

	protected:

		std::string type;

	public:

		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& other );
		WrongAnimal&	operator=( const WrongAnimal& other );
		virtual ~WrongAnimal( void );

		std::string		getType( void ) const;
		void	makeSound() const;
};
