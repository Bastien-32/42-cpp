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

int main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	Bureaucrat b1("Bob", 1);

	rrf = someRandomIntern.makeForm("bullshit", "John");
	delete rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Lennon");
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;
}
