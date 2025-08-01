/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:05:19 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/01 11:26:51 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

#include <iostream>

void	rotone(char& c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c == 'z')
			c = 'a';
		else
			c += 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		if (c == 'Z')
			c = 'A';
		else
			c += 1;
	}
}

void	addone(float& f)
{
	f += 1.0f;
}

int	main(void)
{
	char array[] = {'H', 'e', 'l', 'l', 'o'};
	size_t length = sizeof(array) / sizeof(array[0]);

	::iter(array, length, rotone);
	::iter(array, length, print);
	std::cout << std::endl;

	float flow[] = {0.1f, 1.0f, 3.0f, 10.0f, 1.5f};
	length = sizeof(flow) / sizeof(flow[0]);

	::iter(flow, length, addone);
	::iter(flow, length, print);
	std::cout << std::endl;

	return (0);
}
