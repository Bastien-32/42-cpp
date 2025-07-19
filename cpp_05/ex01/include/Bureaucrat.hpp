/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:50:52 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/19 12:38:17 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <exception>

class Form;

class Bureaucrat
{

	private:

		std::string	_name;
		int			_grade;

	public:

		Bureaucrat( void );
		Bureaucrat( const Bureaucrat& other );
		Bureaucrat&	operator=( const Bureaucrat& other );
		~Bureaucrat( void );

		Bureaucrat( const std::string name, int grade );

		const std::string&	getName( void ) const;
		int					getGrade( void ) const;

		void				incrementGrade( void );
		void				decrementGrade( void );

		void	signForm(Form& f);
		class GradeTooHighException : public std::exception
		{
			public:

				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:

				virtual const char* what() const throw();
		};
		
		class Answer : public std::exception
		{
			public:

				virtual const char* what() const throw();
		};
		

};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);