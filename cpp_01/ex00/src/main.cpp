/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 12:18:53 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/08 16:16:36 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
	std::cout << "Creating a zombie on stack for the duration of program : " << std::endl;
	Zombie	foo("Foo");
	foo.announce();
	std::cout << std::endl;

	std::cout << "Creating a zombie on the heap : " << std::endl;
	Zombie	*Bro = newZombie("Bro");
	Bro->announce();
	std::cout << std::endl;
	
	std::cout << "Creating a zombie on stack for the duration random chump : " << std::endl;
	randomChump("Blop");
	randomChump("Booooolop");
	std::cout << std::endl;

	std ::cout << "Now we destroy the Zombie allocated on the heap : " << std::endl;
	delete Bro;
	std::cout << std::endl;
	
	std::cout << "End of program, all zombies on stack will be destroyed automatically." << std::endl;
	return (0);
}