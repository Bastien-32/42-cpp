/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:47:31 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/07 13:41:33 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

Form::Form( void ) :
	_name("Unnamed"),
	_isSigned(false),
	_gradeToSign(150),
	_gradeToExecute(150)
{}

/* ------------------------ Copy assignment operator ------------------------ */

Form&	Form::operator=( const Form& other )
{
	if ( this != &other )
		_isSigned = other._isSigned;
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

Form::Form( const Form& other ) :
	_name(other._name),
	_isSigned(other._isSigned),
	_gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute)
{}

/* ------------------------------- Destructor ------------------------------- */

Form::~Form( void )
{}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

Form::Form( const std::string name, const int gradeToSign, const int gradeToExecute ) :
	_name(name),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute  > 150)
		throw GradeTooLowException();
}

/* --------------------------------- getters -------------------------------- */

const std::string&	Form::getName() const
{
	return (_name);
}

bool	Form::getIsSigned() const
{
	return (_isSigned);
}

int	Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

/* --------------------------------- setters -------------------------------- */

void	Form::beSigned( const Bureaucrat& b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

/* --------------------------------- Methods -------------------------------- */

const char*	Form::GradeTooHighException::what() const throw()
{
	return("Grade is too high!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return("Grade is too low!");
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */

std::ostream&	operator<<( std::ostream& os, const Form& f )
{
	std::string	formSigned;

	os << "info about \" "<< f.getName() << " \" form :" << std::endl;
	if (f.getIsSigned() == false)
		formSigned = "No";
	else
		formSigned = "Yes";
	os << "\t- Form is signed :\t\t" << formSigned << std::endl;
	os << "\t- Grade to sign form :\t\t" << f.getGradeToSign() << std::endl;
	os << "\t- Grade to execute form :\t" << f.getGradeToExecute() << std::endl;
	return (os);
}