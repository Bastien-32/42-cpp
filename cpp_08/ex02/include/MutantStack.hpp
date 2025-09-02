/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:16:27 by badal-la          #+#    #+#             */
/*   Updated: 2025/09/02 11:15:29 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack( void );
		MutantStack( const MutantStack<T>& other );
		MutantStack&	operator =( const MutantStack<T>& other );
		~MutantStack( void );

		typedef typename std::stack<T>::container_type::iterator		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

		iterator		begin( void );
		iterator		end( void );
		const_iterator	begin( void ) const;
		const_iterator	end( void ) const;

};

#include "../include/MutantStack.tpp"

#endif