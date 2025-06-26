/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:40:22 by badal-la          #+#    #+#             */
/*   Updated: 2025/06/26 11:47:12 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ){
	
	std::cout << "PhoneBook constructed" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ){
	
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}