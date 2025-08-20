/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:21:26 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/20 16:34:49 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

#include <iostream>
#include <vector>

int	main(void)
{
	std::vector<int>	v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	try
	{
		std::vector<int>::iterator	it;
		it = easyfind(v, 30);
		std::cout << "Position of value in vector : " << *it << std::endl;
		it = easyfind(v, 60);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}