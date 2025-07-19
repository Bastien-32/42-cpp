/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:33:48 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/19 14:34:05 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

AForm::AForm( void ) :
	_name("Unnamed"),
	_isSigned(false),
	_gradeToSign(150),
	_gradeToExecute(150)
{}

/* ------------------------ Copy assignment operator ------------------------ */

AForm&	AForm::operator=( const AForm& other )
{
	if ( this != &other )
		_isSigned = other._isSigned;
	return ( *this );
}

/* ---------------------------- Copy constructor ---------------------------- */

AForm::AForm( const AForm& other ) :
	_name(other._name),
	_isSigned(other._isSigned),
	_gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute)
{}

/* ------------------------------- Destructor ------------------------------- */

AForm::~AForm( void )
{}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

AForm::AForm( const std::string name, const int gradeToSign, const int gradeToExecute ) :
	_name(name),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute( gradeToExecute)
{}

/* --------------------------------- getters -------------------------------- */

const std::string&	AForm::getName() const
{
	return (_name);
}

bool	AForm::getIsSigned() const
{
	return (_isSigned);
}

int	AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

/* --------------------------------- setters -------------------------------- */

void	AForm::beSigned( const Bureaucrat& b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeToLowException();
	_isSigned = true;
}

/* --------------------------------- Methods -------------------------------- */

const char*	AForm::GradeTooHighException::what() const throw()
{
	return("Grade is too high!");
}

const char*	AForm::GradeToLowException::what() const throw()
{
	return("Grade is too low!");
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */

std::ostream&	operator<<(std::ostream& os, const AForm& f)
{
	std::string formSigned;

	os << "info about \" "<< f.getName() << " \" form :" << std::endl;
	if (f.getIsSigned() == false)
		formSigned = "No";
	else
		formSigned = "Yes";
	os << "\t- AForm is signed : \t" << formSigned << std::endl;
	os << "\t- Grade to sign form : \t" << f.getGradeToSign() << std::endl;
	os << "\t- Grade to execute form : " << f.getGradeToExecute() << std::endl;
	return (os);
}