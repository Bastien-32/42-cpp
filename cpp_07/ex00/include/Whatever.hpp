/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:50:27 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/01 14:50:28 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template< typename T >
T	min(T a, T b)
{
	return (a < b ? a : b);
}

template< typename T >
T	max(T a, T b)
{
	return (a > b ? a : b);
}