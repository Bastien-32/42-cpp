/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:06:59 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/30 16:30:27 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{}

ScalarConverter::ScalarConverter( const ScalarConverter& other )
{
	(void)other;
}

ScalarConverter&	ScalarConverter::operator=( const ScalarConverter& other )
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter( void )
{}

static bool	checkChar(const std::string& literal)
{
	if (literal.length() != 1)
		return (false);
	if (!isprint(literal[0]) || isdigit(literal[0]))
		return (false);
	return (true);
}

static bool	checkInt(const std::string& literal)
{
	if (literal.length() == 1 && isdigit(literal[0]))
		return (true);
	if (literal[0] == '-' || literal[0] == '+')
	{
		if (literal.length() == 1)
			return (false);
		for (size_t i = 1; i < literal.length(); ++i)
			if (!isdigit(literal[i]))
				return (false);
	}
	else
	{
		for (size_t i = 0; i < literal.length(); ++i)
			if (!isdigit(literal[i]))
				return (false);
	}
	return (true);
}

static bool	checkFloat(const std::string& literal)
{
	size_t	pointCount = 0;
	size_t	fCount = 0;

	if (literal.length() < 3 || literal.back() != 'f')
		return (false);
	for (size_t i = 0; i < literal.length() - 1; ++i)
	{
		if (i == 0 && (literal[i] == '-' || literal[i] == '+'))
			continue;
		if (literal[i] == '.')
		{
			if (pointCount > 0)
				return (false);
			pointCount++;
			continue;
		}
		if (literal[i] == 'f')
		{
			if (fCount > 0 || i != literal.length() - 1)
				return (false);
			fCount++;
			continue;
		}
		if (!isdigit(literal[i]))
			return (false);
	}
	return (true);
}

static bool	checkDouble(const std::string& literal)
{
	size_t	pointCount = 0;

	if (literal.length() < 3 || (literal.back() == 'f' && literal[literal.length() - 2] == '.'))
		return (false);
	for (size_t i = 0; i < literal.length(); ++i)
	{
		if (i == 0 && (literal[i] == '-' || literal[i] == '+'))
			continue;
		if (literal[i] == '.')
		{
			if (pointCount > 0)
				return (false);
			pointCount++;
			continue;
		}
		if (!isdigit(literal[i]))
			return (false);
	}
	return (true);
}

static bool	checkPseudoLiterals(const std::string& literal)
{
	if (literal == "nan" || literal == "nanf"
		|| literal == "-inf" || literal == "+inf"
		|| literal == "-inff" || literal == "+inff")
		return (true);
	return (false);
}

static type	findType(const std::string& literal)
{
	if (literal.empty())
		return INVALID;
	if (checkPseudoLiterals(literal))
		return (PSEUDO_LITERALS);
	if (checkChar(literal))
		return (CHAR);
	if (checkInt(literal))
		return (INT);
	if (checkFloat(literal))
		return (FLOAT);
	if (checkDouble(literal))
		return (DOUBLE);
	return (INVALID);
}

void	convertInChar(const std::string& literal)
{
	char c = literal[0];

	std::cout << "char: \t'" << c << "'" << std::endl;
	std::cout << "int:\t" << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float:\t" << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double:\t" << static_cast<double>(c) << std::endl;
}

void	convertInInt(const std::string& literal)
{
	int i = std::stoi(literal);

	if (i < 0 || i > 127)
		std::cout << "char: \tImpossible" << std::endl;
	else if (!std::isprint(i))
		std::cout << "char: \tNon displayable" << std::endl;
	else
		std::cout << "char: \t'" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int:\t" << i << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float:\t" << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double:\t" << static_cast<double>(i) << std::endl;
}

void	convertInFloat(const std::string& literal)
{
	float f = std::stof(literal);

	if (f < 0 || f > 127)
		std::cout << "char: \tImpossible" << std::endl;
	else if (!std::isprint(f))
		std::cout << "char: \tNon displayable" << std::endl;
	else
		std::cout << "char: \t'" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int:\t" << static_cast<int>(f) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float:\t" << f << "f" << std::endl;
	std::cout << "double:\t" << static_cast<double>(f) << std::endl;
}

void	convertInDouble(const std::string& literal)
{
	double d = std::stod(literal);

	if (d < 0 || d > 127)
		std::cout << "char: \tImpossible" << std::endl;
	else if (!std::isprint(d))
		std::cout << "char: \tNon displayable" << std::endl;
	else
		std::cout << "char: \t'" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int:\t" << static_cast<int>(d) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float:\t" << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double:\t" << d << std::endl;
}

void	convertInPseudoLiterals(const std::string& literal)
{
	std::cout << "char: \tImpossible" << std::endl;
	std::cout << "int:\tImpossible" << std::endl;
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "float:\tnanf" << std::endl;
		std::cout << "double:\tnan" << std::endl;
	}
	else if (literal == "-inf" || literal == "+inf"
			|| literal == "-inff" || literal == "+inff")
	{
		std::cout << "float:\t" << literal[0] << "inff" << std::endl;
		std::cout << "double:\t" << literal[0] << "inf" << std::endl;
	}
}

void	ScalarConverter::convert( const std::string& literal )
{
	switch (findType(literal))
	{
		case CHAR:
			convertInChar(literal);
			break;
		case INT:
			convertInInt(literal);
			break;
		case FLOAT:
			convertInFloat(literal);
			break;
		case DOUBLE:
			convertInDouble(literal);
			break;
		case PSEUDO_LITERALS:
			convertInPseudoLiterals(literal);
			break;
		default:
			std::cerr << "Invalid type" << std::endl;
	}
}
