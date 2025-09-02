#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <map>
#include <stdexcept>
#include <cstdlib>

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

		void	printDB( void ) const;



};

bool	is_directory(const char* path);

#endif