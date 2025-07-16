/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:06:41 by badal-la          #+#    #+#             */
/*   Updated: 2025/07/15 22:18:08 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>

class FlagTrap : public ClapTrap
{

	private:

	public:

		FlagTrap( void );
		FlagTrap( const FlagTrap& other );
		FlagTrap&	operator=( const FlagTrap &other );
		~FlagTrap( void );

		FlagTrap( std::string name );

		void	highFivesGuys(void);

};