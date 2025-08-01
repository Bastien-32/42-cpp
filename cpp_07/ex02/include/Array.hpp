/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:31:27 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/01 12:29:51 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array
{

	private:

		T*				_arrayAddress;
		unsigned int	_size;

	public:

		Array();
		Array(const Array& other);
		Array&	operator=(const Array& other);
		~Array();

		Array(unsigned int n);

		T&				operator[](unsigned int index);
		const T&		operator[](unsigned int index) const;
		unsigned int	size() const;

		class OutOfBoundsException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#include "Array.tpp"