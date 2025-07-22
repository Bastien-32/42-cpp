/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:31:21 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/22 17:39:56 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{

	private:

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:

		AForm( void );
		AForm( const AForm& other );
		AForm&	operator=( const AForm& other );
		virtual ~AForm( void );

		AForm( const std::string name, const int gradeToSign, const int gradeToExecute );
		
		const std::string&	getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;

		void				beSigned( const Bureaucrat& b);

		void				executionPermission(const Bureaucrat& b) const;
		virtual void		execute( Bureaucrat const & executor ) const = 0;

		class	GradeTooHighException : public std::exception
		{
			public:
			
				virtual const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:

				virtual const char*	what() const throw();
		};

		class	IsSignedException : public std::exception
		{
			public:

				virtual const char*	what() const throw();
		};

};

std::ostream&	operator<<( std::ostream& os, const AForm& f );
