/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 09:34:35 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 20:42:49 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"

int		main( void )
{
	int i;
	srand(time(0));

	FragTrap ft = FragTrap( );
	FragTrap ft2 = FragTrap("Cl4P-TP");
	FragTrap ft3 = FragTrap(ft2);

	std::cout << std::endl;
	std::cout << "Let's Play ! with " << ft.getName( ) << std::endl;
	ft.takeDamage( 15 );
	std::cout << "HitPoints = " << ft.getHitPoints( ) << std::endl;
	ft.takeDamage( 25 );
	std::cout << "HitPoints = " << ft.getHitPoints( ) << std::endl;
	ft.beRepaired( 20 );
	std::cout << "HitPoints = " << ft.getHitPoints( ) << std::endl;
	
	i = 0;
	while ( i < 7 ) {
		ft.vaulthunter_dot_exe( "Futurist Vickings" );
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Let's Play ! with " << ft2.getName( ) << std::endl;

	ft2.takeDamage( 55 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;
	ft2.takeDamage( 25 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;
	ft2.beRepaired( 35 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;

	i = 0;
	while ( i < 5 ) {
		ft2.vaulthunter_dot_exe( "Golumns" );
		std::cout << std::endl;
		i++;
	}


	return 0;
}