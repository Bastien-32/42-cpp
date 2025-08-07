/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:07:17 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/07 15:18:18 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

#include <iostream>

int	main(void)
{
	std::cout << "=========== Basics Canonicals tests ===========" << std::endl;
	Array<int> emptyArray;
	std::cout << "Size of empty array : " << emptyArray.size() << std::endl;
	std::cout << std::endl;

	Array<int> intArray(5);
	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i;
	emptyArray = intArray;
	std::cout << "Size of empty array after intArray copy : " << emptyArray.size() << std::endl;
	std::cout << std::endl;

	Array <int> intArray2(intArray);
	std::cout << "Size of intArray2 : " << intArray2.size() << std::endl;
	std::cout << std::endl;

	std::cout << "=============== Int Array tests ===============" << std::endl;
	std::cout << "Size = " << intArray.size() << std::endl;
	std::cout << "Array content at the 4th pos : " << intArray[3] << std::endl;

	try
	{
		int value = intArray[6];
		std::cout << "Array content at the 7th pos : " << value << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	intArray[0] = 42;
	std::cout << "Array content at the first pos : " << intArray[0] << std::endl;
	std::cout << "Array2 content at the first pos : " << intArray2[0] << std::endl;

	std::cout << std::endl;

	std::cout << "============== String Array tests =============" << std::endl;
	Array<std::string> stringArray(7);
	std::cout << "Size = " << stringArray.size() << std::endl;

	stringArray[0] = "Hello";
	stringArray[1] = "World";
	stringArray[2] = "!";
	stringArray[3] = "This";
	stringArray[4] = "is";
	stringArray[5] = "Array";
	stringArray[6] = "!";
	std::cout << "Array content at the first pos : " << stringArray[0] << std::endl;
	stringArray[0] = "Goodbye";
	std::cout << "Array content at the first pos : " << stringArray[0] << std::endl;

	try
	{
		std::string value = stringArray[7];
		std::cout << "Array content at the 8th pos : " << value << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
