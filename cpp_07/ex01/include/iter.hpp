/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:00:00 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/20 10:55:49 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*func)(T&))
{
	for (size_t i = 0; i < length; ++i)
	{
		func(array[i]);
	}
}

template <typename T>
void iter(T* array, size_t length, void (*func)(const T&))
{
	for (size_t i = 0; i < length; ++i)
	{
		func(array[i]);
	}
}

template <typename T>
void print(const T& c)
{
	std::cout << c << " ";
}

#endif