/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:40:54 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/19 19:10:56 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

PresidentialPardonForm::PresidentialPardonForm( void ) :
	AForm("Presidential Pardon creation form", 25, 5),
	_target ("Default")
{}

/* ------------------------ Copy assignment operator ------------------------ */

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& other )
{
	if ( this != &other )
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm
& other ) :
	AForm(other),
	_target(other._target)
{}

/* ------------------------------- Destructor ------------------------------- */

PresidentialPardonForm::~PresidentialPardonForm( void )
{}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

PresidentialPardonForm::PresidentialPardonForm( const std::string target ) :
	AForm("Presidential Pardon creation form", 25, 5),
	_target (target)
{}

/* --------------------------------- getters -------------------------------- */
/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	PresidentialPardonForm::execute( Bureaucrat const& b ) const
{
	executionPermission(b);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox !" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
