/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:30:57 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 20:33:07 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

/**
	CONSTRUCTOR
**/
ZombieHorde::ZombieHorde( int i ) : _numberZombie(i)
{
	this->_z = new Zombie[this->_numberZombie];

	this->announce( );

	return ;
}

/**
	DESTRUCTOR
**/
ZombieHorde::~ZombieHorde( void )
{
	return ;
}

std::string	ZombieHorde::randomChump( void )
{
	int			random;
	std::string listZombieName[5];

	listZombieName[0] = "Eren";
	listZombieName[1] = "Para";
	listZombieName[2] = "Shinchi";
	listZombieName[3] = "Steven";
	listZombieName[4] = "Golum";

	random = rand() % 5;

	return (listZombieName[random]);
}

void	ZombieHorde::announce( void )
{
	int		j;

	j = 0;
	while ( j < this->_numberZombie ) {
		
		this->_z[j].setType( "Runners" );
		this->_z[j].setName( this->randomChump( ) );
		this->_z[j].announce( );
		j++;
	}

	return ;
}