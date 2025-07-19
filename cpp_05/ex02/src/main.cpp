/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */

/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:29:09 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/19 19:07:01 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat	a("Astérix", 10);
	Bureaucrat	b("Obélix", 138);
	ShrubberyCreationForm c("pine_tree");

	std::cout << std::endl;
	std::cout << "---------------------- Test Shrubbery method ----------------------" << std::endl;

	b.executeForm(c);
	a.signForm(c);
	b.executeForm(c);
	a.executeForm(c);

	std::cout << std::endl;
	std::cout << "----------------------- Test Robotmy method -----------------------" << std::endl;
	
	Bureaucrat	d("Bob", 10);
	Bureaucrat	e("L'éponge", 138);
	RobotomyRequestForm f("Baby Doll");

	e.executeForm(f);
	d.signForm(f);
	e.executeForm(f);
	d.executeForm(f);
	d.executeForm(f);
	d.executeForm(f);
	d.executeForm(f);

	std::cout << std::endl;
	std::cout << "-------------------- Test President Pardon method --------------------" << std::endl;

	Bureaucrat	g("Bobby", 4);
	Bureaucrat	h("La pointe", 18);
	PresidentialPardonForm i("La cloche");

	h.executeForm(i);
	g.signForm(i);
	h.executeForm(i);
	g.executeForm(i);

}
