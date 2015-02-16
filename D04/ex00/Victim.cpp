/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:57:42 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 12:11:17 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

/**
	CONSTRUCTOR
**/
Victim::Victim( std::string name ) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;

	return ;
}


Victim::Victim( Victim const &v )
{
	*this = v;

	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;

	return ;
}
/**
	DESTRUCTOR
**/
Victim::~Victim( void )
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}


/**
	ASSIGN OPERATOR
**/
Victim &Victim::operator=(Victim const &v)
{
	if ( this != &v ) {
		this->_name = v.getName( );
	}
    return *this;
}
std::ostream & operator<<( std::ostream &o, Victim const &s )
{
	o << "I am " << s.getName( ) << ", and I like otters !" << std::endl;

	return o;
}

/**
	FUNCTIONS
**/
void 			Victim::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;

	return ;
}

/**
	GETTER
**/
std::string		Victim::getName( void ) const
{
	return this->_name;
}
