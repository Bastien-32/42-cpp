/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:03:05 by badal-la          #+#    #+#             */
/*   Updated: 2025/09/02 14:09:38 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <sstream>
#include <cmath>

enum type
{
	CHAR,
	PSEUDO_LITERALS,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

class ScalarConverter
{

	private:

		ScalarConverter( void );
		ScalarConverter( const ScalarConverter& other );
		ScalarConverter&	operator=( const ScalarConverter& other );
		~ScalarConverter( void );

	public:

		static void	convert( const std::string& literal );

};