/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:52:14 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/22 14:14:42 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

#include <iostream>
#include <cstdlib>

int main(void)
{
	const Animal*	ja = new Dog();
	const Animal*	ia = new Cat();
	delete ja;
	delete ia;
	std::cout << std::endl;

	int	nb_animals = 5;
	Animal* animals[nb_animals];
	
	for (int i = 0; i < nb_animals; i++)
	{
		if (i <= nb_animals / 2)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}
	std::cout << std::endl;

	for (int i = 0; i < nb_animals; i++)
	{
		Brain brain = animals[i]->getBrain();
		std::cout << brain.getIdea(i) << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < nb_animals; i++)
		delete animals[i];

	return (0);
}