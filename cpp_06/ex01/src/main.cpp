/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:40:34 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/30 18:57:24 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"
#include "../include/Data.hpp"

#include <iostream>

int main(void)
{
	Data*	data = new Data();
	data->n = 42;

	uintptr_t raw = Serializer::serialize(data);
	std::cout << "Original pointer:\t" << &data << std::endl;
	std::cout << "Original data:\t\t" << data->n << std::endl;
	std::cout << "Serialized data:\t" << raw << std::endl;
	
	std::cout << std::endl;

	Data* deserializedData = Serializer::deserialize(raw);
	std::cout << "Deserialized pointer:\t" << &deserializedData << std::endl;
	std::cout << "Deserialized data:\t" << deserializedData->n << std::endl;

	delete data;

	return (0);
}