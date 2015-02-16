/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 09:34:35 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 17:22:07 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main( void )
{
	int i;
	srand(time(0));

	ScavTrap st = ScavTrap("Full-Scav");
	FragTrap ft = FragTrap("Cl4P-TP");

	std::cout << std::endl;
	std::cout << "Let's Play ! with " << ft.getName( ) << std::endl;
	i = 0;
	while ( i < 7 ) {
		ft.vaulthunter_dot_exe( "Futurist Vickings" );
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Let's Play ! with " << st.getName( ) << std::endl;
	i = 0;
	while ( i < 5 ) {
		st.challengeNewcomer( );
		std::cout << std::endl;
		i++;
	}

	return 0;
}