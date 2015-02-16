/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 09:34:35 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 20:13:30 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main( void )
{
	int i;
	srand(time(0));

	FragTrap ft = FragTrap( );
	FragTrap ft2 = FragTrap("Shinchi-TP");
	FragTrap ft3 = FragTrap(ft2);

	std::cout << std::endl;
	std::cout << "Let's Play ! with " << ft2.getName( ) << std::endl;
	i = 0;
	while ( i < 7 ) {
		ft2.vaulthunter_dot_exe( "Futurist Vickings" );
		std::cout << std::endl;
		i++;
	}

	ScavTrap st = ScavTrap( );
	ScavTrap st2 = ScavTrap("CL4P-TP");
	ScavTrap st3 = ScavTrap(st2);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Let's Play ! with " << st2.getName( ) << std::endl;
	i = 0;
	while ( i < 5 ) {
		st2.challengeNewcomer( );
		std::cout << std::endl;
		i++;
	}


	return 0;
}