/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:32:17 by badal-la          #+#    #+#             */
/*   Updated: 2025/08/04 16:18:24 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/Data.hpp"

#include <iostream>
#include <stdint.h>

class Serializer
{

	private:

		Serializer( void );
		Serializer( const Serializer& other );
		Serializer&	operator=( const Serializer& other );
		~Serializer( void );

	public:

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

};