/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:58:52 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 12:54:10 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int 	main( void )
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Victim *bob = new Peon("Bob");

	std::cout << robert << jim << joe << *bob;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(*bob);

	delete bob;

	return 0;
}