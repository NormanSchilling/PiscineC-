/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:32:05 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 12:17:23 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent 
{
	public:
		ZombieEvent( void );
		~ZombieEvent( void );

		Zombie *newZombie( std::string name );

		void 	setZombieType( std::string _type );

	private:
		std::string 	_ZombieType;
};

#endif
