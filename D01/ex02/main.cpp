/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:31:35 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 14:54:02 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	randomChump( void )
{
	int			random;
	std::string listZombieName[5];
	ZombieEvent firstEvent = ZombieEvent(  );

	listZombieName[0] = "Eren";
	listZombieName[1] = "Para";
	listZombieName[2] = "Shinchi";
	listZombieName[3] = "Steven";
	listZombieName[4] = "Golum";

	random = rand() % 5;

	firstEvent.setZombieType( "Runners" );
	Zombie *z = firstEvent.newZombie( listZombieName[random] );
	z->announce( );

	delete z;
	
	return ;
}

int main( void )
{
	int			i;
	srand(time(0));

	i = 0;
	while ( i  < 5 ) { 
		randomChump( );
		i++;
	}

	return 0;
}