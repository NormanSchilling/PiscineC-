/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:26:08 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 11:19:54 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"


void ponyOnTheStack( void )
{
	std::cout << "On the Stack" << std::endl;
	Pony ponyStack = Pony("Eden", "white", "80");

	std::cout << "this pony is " << ponyStack.getColor( ) << " and it weight " << ponyStack.getWeight( ) << std::endl;

	std::cout << ponyStack.getName( ) << " running like a bitch because he is afraid about gangsta !" << std::endl;

	return ;
}

void ponyOnTheHeap( void )
{
	std::cout << "On the Heap" << std::endl;

	Pony *ponyHeap = new Pony("Edouard", "blue", "100");

	std::cout << "this pony is " << ponyHeap->getColor( ) << " and it weight " << ponyHeap->getWeight( ) << std::endl;

	std::cout << ponyHeap->getName( ) << " eating !" << std::endl;

	delete ponyHeap;

	return ;
}

int		main( void )
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();

	return 0;
}