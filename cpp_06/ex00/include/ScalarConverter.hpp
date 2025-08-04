/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:03:05 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/04 16:39:14 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <string>
#include <iomanip>
#include <cstdlib>

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

	public:

		ScalarConverter( void );
		ScalarConverter( const ScalarConverter& other );
		ScalarConverter&	operator=( const ScalarConverter& other );
		~ScalarConverter( void );

		static void	convert( const std::string& literal );

};