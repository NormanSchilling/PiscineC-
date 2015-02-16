/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:58:27 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 12:39:00 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"
#include "Victim.hpp"

/**
	CONSTRUCTOR
**/
Peon::Peon( std::string name ) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;

	return ;
}


Peon::Peon( Peon const &p ) : Victim(p)
{
	std::cout << "Zog zog." << std::endl;

	return ;
}
/**
	DESTRUCTOR
**/
Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}


/**
	ASSIGN OPERATOR
**/
Peon &Peon::operator=(Peon const &p)
{
	Victim::operator=( p );

    return *this;
}

/**
	FUNCTIONS
**/
void 	Peon::getPolymorphed( void ) const
{
	std::cout << this->_name << "  has been turned into a pink pony !" << std::endl;

	return ;
}

/**
	GETTER
**/

