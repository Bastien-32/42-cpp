/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 09:20:43 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/03 09:36:45 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/colors.hpp"
#include <iostream>
#include <fstream>
#include <iterator>
#include <sys/stat.h>

std::string	search_n_replace(const std::string& content, std::string search, std::string replace)
{
	std::string				result;
	std::string::size_type	i;

	i = 0;
	while (i < content.length())
	{
		if (content.compare(i, search.length(), search) == 0)
		{
			result += replace;
			i += search.length();
		}
		else
			result += content[i++];
	}
	return (result);
}

bool	is_directory(const char* path)
{
	struct stat path_stat;

	if (stat(path, &path_stat) != 0)
		return (false);
	return (S_ISDIR(path_stat.st_mode));
}

int	main(int argc, char **argv)
{
	if (argc != 4 || std::string(argv[2]).empty())
	{
		std::cerr << BRED "Usage : ./Sed_is_for_losers [filename] [characters to replace] [new characters]" RESET << std::endl;
		return (1);
	}

	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open() || !inputFile.good() || is_directory(argv[1]))
	{
		std::cerr << BRED << argv[1] << " opening failed" RESET << std::endl;
		return (1);
	}

	std::string file_replace = std::string(argv[1]) + ".replace";
	std::ofstream outputFile(file_replace);
	if (!outputFile.is_open() || !outputFile.good())
	{
		inputFile.close();
		std::cerr << BRED << file_replace << "File opening failed" RESET << std::endl;
		return (1);
	}
	
	std::string contentFile((std::istreambuf_iterator<char>(inputFile)),
							std::istreambuf_iterator<char>());
	std::string new_file_content = search_n_replace(contentFile, argv[2], argv[3]);
	outputFile << new_file_content;
	if (outputFile.fail())
	{
		std::cerr << BRED "Erreur : échec de l'écriture dans le fichier." RESET << std::endl;
		inputFile.close();
		outputFile.close();
		return (1);
	}
	
	inputFile.close();
	outputFile.close();

	std::cout << "The characters sequence \""
				<< BBLUE << argv[2] << RESET
				<< "\" in the file "
				<< BGREEN << argv[1] << RESET
				<< " are replaced in the file "
				<< BGREEN << file_replace << RESET
				<< " by the characters sequence \""
				<< BBLUE << argv[3] << RESET
				<< "\"." << std::endl;

	return (0);
}