/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 12:23:33 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/02 08:59:16 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <ctime>

class Zombie
{

	private:

		std::string _name;

	public:

		Zombie( std::string name );
		~Zombie(void);

		void	announce() const;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif