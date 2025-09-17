/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:46:54 by badal-la          #+#    #+#             */
/*   Updated: 2025/09/16 14:49:49 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <map>
#include <stdexcept>
#include <cstdlib>
#include <string>

class BitcoinExchange
{

	private:

		std::map<std::string, double>	_data;

		void	handleLine(std::string line, char sep);
		void	checkdate(std::string date);
		double	checkvalue(std::string value);
		void	parseDB( const char* dBPath );
		void	parseLineDB(std::string line, char sep);

	public:

		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& other );
		BitcoinExchange&	operator=( const BitcoinExchange& other );
		~BitcoinExchange( void );

		void	transformInput(const char* inputFile);
		void	printDB( void ) const;

};

bool	is_directory(const char* path);

#endif