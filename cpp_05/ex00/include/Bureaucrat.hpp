/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:50:52 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/22 17:32:45 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <exception>

class Bureaucrat
{

	private:

		const std::string	_name;
		int					_grade;

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

		class	GradeTooHighException : public std::exception
		{
			public:

				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:

				virtual const char* what() const throw();
		};

};

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& Bureaucrat );
