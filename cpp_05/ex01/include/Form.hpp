/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:36:53 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/04 18:05:19 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{

	private:

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:

		Form( void );
		Form( const Form& other );
		Form&	operator=( const Form& other );
		~Form( void );

		Form( const std::string name, const int gradeToSign, const int gradeToExecute );

		const std::string&	getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;

		void				beSigned( const Bureaucrat& b);

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

};

std::ostream&	operator<<( std::ostream& os, const Form& f );

