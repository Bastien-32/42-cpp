/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:38:03 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/23 14:37:51 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

Intern::Intern( void )
{}

/* ------------------------ Copy assignment operator ------------------------ */

Intern&	Intern::operator=( const Intern& other )
{
	(void)other;
	return (*this);
}

/* ---------------------------- Copy constructor ---------------------------- */

Intern::Intern( const Intern& other )
{
	(void)other;
}

/* ------------------------------- Destructor ------------------------------- */

Intern::~Intern( void )
{}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */
/* --------------------------------- getters -------------------------------- */
/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

AForm*	Intern::makeForm( std::string formName,std::string target )
{
	std::string	formToCreate[3] = {"robotomy request",
									"presidential pardon request",
									"shrubbery creation request"};
	AForm*		(Intern::*functions[3])(std::string target) = {&Intern::robotomyF,
																&Intern::presidentialF,
																&Intern::shrubberyF};
	for(int i = 0; i < 3; i++)
	{
		if (formToCreate[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*functions[i])(target));
		}
	}
	std::cerr << "Intern cannot creates " << formName << "!" << std::endl;
	return (NULL);
}

AForm* Intern::robotomyF( std::string target )
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::presidentialF( std::string target )
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::shrubberyF( std::string target )
{
	return (new ShrubberyCreationForm(target));
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
