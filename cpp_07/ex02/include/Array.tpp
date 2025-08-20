/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:32:54 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/20 11:16:12 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

/* -------------------------------------------------------------------------- */
/*                            Canonical (mandatory)                           */
/* -------------------------------------------------------------------------- */

/* --------------------------- Default Constructor -------------------------- */

template <typename T>
Array<T>::Array() :
	_arrayAddress(NULL),
	_arrayLengh(0)
{}

/* ------------------------------- Destructor ------------------------------- */

template <typename T>
Array<T>::~Array()
{
	delete[] _arrayAddress;
}

/* ---------------------------- Copy constructor ---------------------------- */

template <typename T>
Array<T>::Array(const Array& other) :
	_arrayLengh(other._arrayLengh)
{
	if (_arrayLengh == 0)
	{
		_arrayAddress = NULL;
		return;
	}
	_arrayAddress = new T[_arrayLengh];
	for (unsigned int i = 0; i < _arrayLengh; ++i)
		_arrayAddress[i] = other._arrayAddress[i];
}

/* ------------------------ Copy assignment operator ------------------------ */

template<typename T>
Array<T>&	Array<T>::operator=(const Array& other)
{
	
	if (this != &other)
	{
		if (_arrayAddress)
			delete[] _arrayAddress;
		_arrayLengh = other._arrayLengh;
		if (_arrayLengh == 0)
		{
			_arrayAddress = NULL;
			return (*this);
		}
		_arrayAddress = new T[_arrayLengh];
		for (unsigned int i = 0; i < _arrayLengh; ++i)
			_arrayAddress[i] = other._arrayAddress[i];
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                not mandatory                               */
/* -------------------------------------------------------------------------- */

/* ------------------------------- Constructor ------------------------------ */

template <typename T>
Array<T>::Array(unsigned int n) :
	_arrayLengh(n)
{
	if (n == 0)
	{
		_arrayAddress = NULL;
		return;
	}
	_arrayAddress = new T[n];
	for (unsigned int i = 0; i < n; ++i)
		_arrayAddress[i] = T();
}

/* --------------------------------- getters -------------------------------- */

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_arrayLengh);
}

/* --------------------------------- setters -------------------------------- */
/* --------------------------------- Methods -------------------------------- */

template <typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index >= _arrayLengh)
		throw OutOfBoundsException();
	return (_arrayAddress[index]);
}

template <typename T>
const T&	Array<T>::operator[](unsigned int index) const
{
	if (index >= _arrayLengh)
		throw OutOfBoundsException();
	return (_arrayAddress[index]);
}

/* ------------------------------- Exceptions ------------------------------- */

template <typename T>
const char*	Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index out of bounds");
}

/* -------------------------------------------------------------------------- */
/*                           Function outside class                           */
/* -------------------------------------------------------------------------- */
