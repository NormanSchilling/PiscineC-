/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:57:16 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 12:11:10 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

/**
	CONSTRUCTOR
**/
Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;

	return ;
}


Sorcerer::Sorcerer( Sorcerer const &s )
{
	*this = s;

	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;

	return ;
}
/**
	DESTRUCTOR
**/
Sorcerer::~Sorcerer( void )
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}


/**
	ASSIGN OPERATOR
**/
Sorcerer &Sorcerer::operator=(Sorcerer const &s)
{
	if ( this != &s ) {
		this->_name = s.getName( );
		this->_title = s.getTitle( );
	}

    return *this;
}
std::ostream & operator<<( std::ostream &o, Sorcerer const &s )
{
	o << "I am " << s.getName( ) << ", " << s.getTitle( ) << ", and I like ponies !" << std::endl;

	return o;
}

/**
	FUNCTIONS
**/
void 			Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed( );

	return ;
}


/**
	GETTER
**/
std::string		Sorcerer::getName( void ) const
{
	return this->_name;
}
std::string		Sorcerer::getTitle( void ) const
{
	return this->_title;
}