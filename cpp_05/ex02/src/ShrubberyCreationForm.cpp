/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:05:46 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/19 16:02:42 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
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
	_target ("Default")
{}

/* --------------------------------- getters -------------------------------- */
/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	//verifier les conditions d'execution
	std::string	of_name = _target +  "shrubbery";
	std::ofstream of(of_name.c_str());
	of <<"              *"
		<< "            /.\\\n"
		<< "           /..'\\\n"
		<< "           /'.'\\\n"
		<< "          /.''.'\\\n"
		<< "          /.'.'.\\\n"
		<< "   \"'\"\"\"\"/'.''.'.\\\"\"'\"'\"\n"
		<< "         ^^^[_]^^^\n"
		<< std::endl;

}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
