/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:37:09 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/23 14:24:17 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

#include <iostream>

class Intern
{

	private:

	public:

		Intern( void );
		Intern( const Intern& other );
		Intern& operator=( const Intern& other );
		~Intern( void );

		AForm*	makeForm( std::string formName, std::string target );

		AForm* robotomyF( std::string target );
		AForm* presidentialF( std::string target );
		AForm* shrubberyF( std::string target );
};