/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:39:17 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/19 18:39:18 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AForm.hpp"
#include <iostream>
#include <exception>
#include <fstream>

class Bureaucrat;

class RobotomyRequestForm : public AForm
{

	private:

		std::string	_target; 

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm& other );
		RobotomyRequestForm&	operator=( const RobotomyRequestForm& other );
		~RobotomyRequestForm( void );

		RobotomyRequestForm( const std::string target );

		void	execute( Bureaucrat const & executor ) const;

};
