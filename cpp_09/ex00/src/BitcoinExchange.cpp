#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void )
{
	parseDB("data.csv");
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& other ) :
	_data(other._data)
{}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& other )
{
	if (this != &other)
	{
		_data = other._data;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange( void )
{}

void	BitcoinExchange::parseDB( const char* dBPath )
{
	std::ifstream	dBFile(dBPath);
	if (!dBFile.is_open() || !dBFile.good() || is_directory(dBPath))
		throw std::runtime_error("Cannot open file " + std::string(dBPath));

	std::string	line;
	std::getline(dBFile, line);
	while (std::getline(dBFile, line))
		parseLineDB(line, ',');

	dBFile.close();
}

void BitcoinExchange::parseLineDB(std::string line, char sep)
{
	std::string date;
	std::string value;

	unsigned long j = 0;
	for (; j < line.size(); j++)
	{
		if(line[j] == sep)
			break;
	}
	if (j == line.size())
		throw std::runtime_error("Bad input, value missed somewhere!");
	date = std::string(line.begin(), line.begin() + j);
	date[j + 1] = '\0';
	value = std::string(line.begin() + j + 1, line.end());
	value[line.end() - (line.begin() + j + 1) + 1] = '\0';
	_data[date] = std::strtod(value.c_str(), NULL);
}

void	BitcoinExchange::transformInput(const char* nameInputFile)
{
	std::ifstream	inputFile(nameInputFile);
	if (!inputFile.is_open() || !inputFile.good() || is_directory(nameInputFile))
		throw std::runtime_error("Cannot open file " + std::string(nameInputFile));
}


bool	is_directory(const char* path)
{
	struct stat path_stat;

	if (stat(path, &path_stat) != 0)
		return (false);
	return (S_ISDIR(path_stat.st_mode));
}

void	BitcoinExchange::printDB( void ) const
{
	for ( std::map<std::string, double>::const_iterator it = _data.begin();it != _data.end(); it++)
	{
		std::cout << it->first << "////" << it->second<< std::endl;
	}
}
