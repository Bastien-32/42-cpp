/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:22:35 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/23 17:56:46 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

Bureaucrat::Bureaucrat( void ) :
	_name("Default"),
	_grade(150)
{}

/* ------------------------ Copy assignment operator ------------------------ */

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other )
{
	if ( this != &other )
		_grade = other._grade;
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

Bureaucrat::Bureaucrat( const Bureaucrat& other ) :
	_name(other._name),
	_grade(other._grade)
{}

/* ------------------------------- Destructor ------------------------------- */

Bureaucrat::~Bureaucrat( void )
{}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

Bureaucrat::Bureaucrat( const std::string name, int grade ) :
	_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade >150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

/* --------------------------------- getters -------------------------------- */

const std::string&	Bureaucrat::getName( void ) const
{
	return (_name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (_grade);
}

/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

void	Bureaucrat::incrementGrade( void )
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& Bureaucrat )
{
	os << Bureaucrat.getName()
		<< ", bureaucrat grade "
		<< Bureaucrat.getGrade();
	return (os);
}
