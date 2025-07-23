/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:22:52 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/23 14:22:55 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AForm.hpp"
#include <iostream>
#include <exception>
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{

	private:

		std::string	_target; 

	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm& other );
		ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& other );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm( const std::string target );

		void	execute( Bureaucrat const& b ) const;

};
