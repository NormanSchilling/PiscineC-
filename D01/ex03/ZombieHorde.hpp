/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:31:11 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 20:08:38 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde( int i );
		~ZombieHorde( void );

		std::string	randomChump( void );
		void announce();

	private:
		Zombie			*_z;
		int 			_numberZombie;

};

#endif