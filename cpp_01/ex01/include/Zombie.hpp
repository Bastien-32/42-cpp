/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 12:23:33 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/08 16:01:13 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <ctime>

class Zombie
{

	private:

		std::string _name;

	public:

		Zombie( std::string name );
		Zombie(void);
		~Zombie(void);

		void	announce() const;
		void	setname( std::string name );

};

Zombie* zombieHorde( int N, std::string name );
