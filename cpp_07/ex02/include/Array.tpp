/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:32:54 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/01 12:25:41 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/Array.hpp"

template <typename T>
Array<T>::Array() :
	_arrayAddress(nullptr),
	_size(0)
{}

template <typename T>
Array<T>::~Array()
{
	delete[] _arrayAddress;
}

template <typename T>
Array<T>::Array(const Array& other) :
	_size(other._size)
{
	if (_size == 0)
	{
		_arrayAddress = nullptr;
		return;
	}
	_arrayAddress = new T[_size];
	for (unsigned int i = 0; i < _size; ++i)
		_arrayAddress[i] = other._arrayAddress[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	
	if (_arrayAddress != other._arrayAddress)
	{
		if (_arrayAddress)
			delete[] _arrayAddress;
		_size = other._size;
		if (_size == 0)
		{
			_arrayAddress = nullptr;
			return *this;
		}
		_arrayAddress = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_arrayAddress[i] = other._arrayAddress[i];
	}
	return (*this);
}

template <typename T>
Array<T>::Array(unsigned int n) :
	_size(n)
{
	if (n == 0)
	{
		_arrayAddress = nullptr;
		return;
	}
	_arrayAddress = new T[n];
	for (unsigned int i = 0; i < n; ++i)
		_arrayAddress[i] = T();
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}