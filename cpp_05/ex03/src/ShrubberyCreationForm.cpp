/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:05:46 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/07 14:04:11 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
	AForm("Shrubbery creation form", 145, 137),
	_target ("Default")
{}

/* ------------------------ Copy assignment operator ------------------------ */

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other )
{
	if ( this != &other )
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm
& other ) :
	AForm(other),
	_target(other._target)
{}

/* ------------------------------- Destructor ------------------------------- */

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) :
	AForm("Shrubbery creation form", 145, 137),
	_target (target)
{}

/* --------------------------------- getters -------------------------------- */
/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	ShrubberyCreationForm::execute( Bureaucrat const& b ) const
{
	executionPermission(b);
	std::string	of_name = _target + "_shrubbery";
	std::ofstream of(of_name.c_str());
	of <<"             *\n"
		<< "            /.\\\n"
		<< "           /..'\\\n"
		<< "           /'.'\\\n"
		<< "          /.''.'\\\n"
		<< "          /.'.'.\\\n"
		<< "   \"'\"\"\"\"/'.''.'.\\\"\"'\"'\"\n"
		<< "         ^^^[_]^^^\n"
		<< std::endl;
	of.close();
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
