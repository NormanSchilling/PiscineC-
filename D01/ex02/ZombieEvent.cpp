/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:31:52 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 14:32:20 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

/**
	CONSTRUCTOR
**/
ZombieEvent::ZombieEvent( )
{
	this->_ZombieType = "normal";
	return ;
}

/**
	DESTRUCTOR
**/
ZombieEvent::~ZombieEvent( void )
{
	return ;
}

/**
	FUNCTIONS
**/
Zombie *ZombieEvent::newZombie( std::string name )
{
	Zombie		*z = new Zombie(this->_ZombieType, name);

	return z;
}


/**
	SETTER
**/
void 		ZombieEvent::setZombieType( std::string _type )
{
	this->_ZombieType = _type;
}
