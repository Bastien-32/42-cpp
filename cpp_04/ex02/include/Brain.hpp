/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:19:37 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 09:12:30 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>

class Brain
{

	private:

		std::string	_ideas[100];

	public:

		Brain( void );
		Brain( const Brain& other );
		Brain&	operator=( const Brain& other );
		~Brain( void );

		std::string	getIdea( const unsigned int i ) const;
		void		setIdea( int index, const std::string& idea );

};