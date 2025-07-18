/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:47:33 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/17 22:47:52 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../include/AMateria.hpp"

#include <iostream>

class IMateriaSource
{

	public:

		virtual				~IMateriaSource() {}
		virtual void		learnMateria( AMateria* ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;

};