/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:47:08 by badal-la          #+#    #+#             */
/*   Updated: 2025/09/16 14:48:59 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void BitcoinExchange::parseLineDB(std::string line, char sep)
{
	std::size_t	pos_sep = line.find(sep);
	if (pos_sep == std::string::npos)
		throw std::runtime_error("Bad input, separator not find");

	std::string	date = line.substr(0, pos_sep);
	std::string	value = line.substr(pos_sep + 1);

	_data[date] = std::strtod(value.c_str(), NULL);
}

void	BitcoinExchange::parseDB( const char* dBPath )
{
	std::ifstream	dBFile(dBPath);
	if (!dBFile.is_open() || !dBFile.good() || is_directory(dBPath))
		throw std::runtime_error("Error: cannot open file " + std::string(dBPath));

	std::string	line;
	std::getline(dBFile, line);
	if (line.size() == 0)
		throw std::runtime_error("Error: base data is empty");
	while (std::getline(dBFile, line))
		parseLineDB(line, ',');

	dBFile.close();
}

bool	isLeapYear(int year)
{
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void	BitcoinExchange::checkdate(std::string date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		throw std::runtime_error("bad input => " + date);
	
	int	yearInput = std::strtol(date.substr(0, 4).c_str(), NULL, 10);
	int	monthInput = std::strtol(date.substr(5, 2).c_str(), NULL, 10);
	int	dayInput = std::strtol(date.substr(8, 2).c_str(), NULL, 10);
	
	int yearDBmin = std::strtol(_data.begin()->first.substr(0, 4).c_str(), NULL, 10);
	int monthDBmin = std::strtol(_data.begin()->first.substr(5, 2).c_str(), NULL, 10);
	int dayDBmin = std::strtol(_data.begin()->first.substr(8, 2).c_str(), NULL, 10);

	if (yearInput < yearDBmin
		|| (yearInput == yearDBmin && monthInput < monthDBmin)
		|| (yearInput == yearDBmin && monthInput == monthDBmin && dayInput < dayDBmin))
		throw std::runtime_error("date too old => " + date + " < " + _data.begin()->first);

	if (monthInput < 1 || monthInput > 12)
		throw std::runtime_error("bad input => " + date);

	if ((monthInput == 1
		|| monthInput == 3
		|| monthInput == 5
		|| monthInput == 7
		|| monthInput == 8
		|| monthInput == 10
		|| monthInput == 12)
		&& (dayInput < 1 || dayInput > 31))
		throw std::runtime_error("bad input => " + date);
	if ((monthInput == 4 || monthInput == 6 || monthInput == 9 || monthInput == 11)
		&& (dayInput < 1 || dayInput > 30))
		throw std::runtime_error("bad input => " + date);
	if (monthInput == 2
		&& ((isLeapYear(yearInput) && (dayInput < 1 || dayInput > 29))
			|| (!isLeapYear(yearInput) && (dayInput < 1 || dayInput > 28))))
		throw std::runtime_error("bad input => " + date);
}

double	BitcoinExchange::checkvalue(std::string value)
{
	double val = std::strtod(value.c_str(), NULL);
	if (val < 0)
		throw std::runtime_error("not a positive number.");
	if (val > 1000)
		throw std::runtime_error("too large a number.");
	return (val);
}

void BitcoinExchange::handleLine(std::string line, char sep)
{
	std::size_t	pos = line.find(sep);
	if (pos == std::string::npos)
		throw std::runtime_error("bad input => " + line);
	if (line[pos - 1] != ' ')
		throw std::runtime_error("bad input => " + line);

	std::string date = std::string(line.begin(), line.begin() + pos - 1);
	checkdate(date);
	if ((pos + 1 >= line.size()) || (pos + 2 > line.size()))
		throw std::runtime_error("bad input => " + line);

	std::string value = std::string(line.begin() + pos + 2, line.end());
	if (value.size() == 0)
		throw std::runtime_error("empty value.");
	double	val = checkvalue(value);

	std::map<std::string, double>::iterator it = _data.lower_bound(date);
	if (it == _data.end())
		it--;
	else if (it->first != date && it != _data.begin())
		--it;
	std::cout << date << " => " << val << " = " << (val * it->second) << std::endl;
}

void	BitcoinExchange::transformInput(const char* nameInputFile)
{
	std::ifstream	inputFile(nameInputFile);
	if (!inputFile.is_open() || !inputFile.good() || is_directory(nameInputFile))
		throw std::runtime_error("Error: cannot open file " + std::string(nameInputFile));

	std::string	line;
	std::getline(inputFile, line);
	if (line.size() == 0)
		throw std::runtime_error("Error: input is empty");
	while (std::getline(inputFile, line))
	{
		try
		{
			handleLine(line, '|');
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}

	inputFile.close();
}

void	BitcoinExchange::printDB( void ) const
{
	for ( std::map<std::string, double>::const_iterator it = _data.begin();it != _data.end(); it++)
		std::cout << it->first << "," << it->second<< std::endl;
}

bool	is_directory(const char* path)
{
	struct stat path_stat;

	if (stat(path, &path_stat) != 0)
		return (false);
	return (S_ISDIR(path_stat.st_mode));
}
