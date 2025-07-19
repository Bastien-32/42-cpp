/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:31:21 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/19 14:55:03 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AForm.hpp"
#include <iostream>
#include <exception>
#include <fstream>

class Bureaucrat;

class PresidentialPardonForm : public AForm
{

	private:

		std::string	_target; 

	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm& other );
		PresidentialPardonForm&	operator=( const PresidentialPardonForm& other );
		~PresidentialPardonForm( void );

		PresidentialPardonForm( const std::string target );

		void	execute( Bureaucrat const & executor ) const;

};
