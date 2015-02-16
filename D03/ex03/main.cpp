/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 09:34:35 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 20:16:07 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

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
	while ( i < 5 ) {
		ft2.vaulthunter_dot_exe( "Futurist Vickings" );
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap st = ScavTrap( );
	ScavTrap st2 = ScavTrap("CL4P-TP");
	ScavTrap st3 = ScavTrap(st2);

	std::cout << std::endl;

	std::cout << "Let's Play ! with " << st2.getName( ) << std::endl;
	i = 0;
	while ( i < 3 ) {
		st2.challengeNewcomer( );
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	ClapTrap ct = ClapTrap("SIMPLE");

	NinjaTrap nt = NinjaTrap("Naruto-TP");
	NinjaTrap nt2 = NinjaTrap("Sasuke-TP");

	std::cout << std::endl;

	std::cout << "Let's Play ! with NINJA " << st.getName( ) << std::endl;

	nt.ninjaShoebox( ct );
	nt.ninjaShoebox( nt2 );
	nt.ninjaShoebox( ft2 );
	nt.ninjaShoebox( st2 );

	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}