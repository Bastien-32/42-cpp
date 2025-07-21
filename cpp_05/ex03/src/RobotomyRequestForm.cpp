/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:40:54 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/19 19:10:56 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

RobotomyRequestForm::RobotomyRequestForm( void ) :
	AForm("RobotomyRequestForm creation form", 72, 45),
	_target ("Default")
{}

/* ------------------------ Copy assignment operator ------------------------ */

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& other )
{
	if ( this != &other )
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm
& other ) :
	AForm(other),
	_target(other._target)
{}

/* ------------------------------- Destructor ------------------------------- */

RobotomyRequestForm::~RobotomyRequestForm( void )
{}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

RobotomyRequestForm::RobotomyRequestForm( const std::string target ) :
	AForm("Robotomy creation form", 72, 45),
	_target (target)
{}

/* --------------------------------- getters -------------------------------- */
/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

void	RobotomyRequestForm::execute( Bureaucrat const& b ) const
{
	executionPermission(b);
	static int r = 0;
	if (!r)
	{
		r = 1;
		srand(time(NULL));
	}
	std::cout << "BrrrrrrRrrrrRRRRRRRRR" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been Robotomized !" << std::endl;
	else
		std::cout << _target << " Robotomization failed ! " << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
