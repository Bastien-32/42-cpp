#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <map>
#include <stdexcept>
#include <cstdlib>
#include <cctype>

class BitcoinExchange
{

	private:

		std::map<std::string, double> _data;

	public:

		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& other );
		BitcoinExchange&	operator=( const BitcoinExchange& other );
		~BitcoinExchange( void );

		void	parseDB( const char* dBPath );
		void	parseLineDB(std::string line, char sep);
		void	transformInput(const char* inputFile);
		void	handleLine(std::string line, char sep);
		void	checkdate(std::string date);
		double	checkvalue(std::string value);


		void	printDB( void ) const;



};

bool	is_directory(const char* path);

#endif