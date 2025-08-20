/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:50:27 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/20 10:58:51 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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

#endif