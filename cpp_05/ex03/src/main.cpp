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
#include "../include/Intern.hpp"

#include <iostream>

int main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	Bureaucrat b1("Bob", 1);
	Bureaucrat b150("Newbe", 150);

	rrf = someRandomIntern.makeForm("bullshit", "John");
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	b150.signForm(*rrf);
	b1.signForm(*rrf);
	b150.executeForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("presidential pardon request", "Bender");
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("shrubbery creation request", "Bender");
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;

	return (0);
}
