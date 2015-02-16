/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:24:29 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 11:26:37 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string *panthere = new std::string( "String panthere" );
	std::cout << *panthere << std::endl;

	delete panthere;
}


int	main( void )
{
	memoryLeak();

	return 0;
}