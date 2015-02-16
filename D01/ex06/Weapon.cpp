/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:57:38 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/07 09:23:46 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"


/**
	CONSTRUCTOR
**/
Weapon::Weapon( std::string type ) : _type(type)
{
	return ;
}

/**
	DESTRUCTOR
**/
Weapon::~Weapon( void )
{
	return ;
}

/**
	FUNCTIONS
**/


/**
	SETTER
**/
void		Weapon::setType( const std::string &type )
{
	this->_type = type;
}

/**
	GETTER
**/
std::string Weapon::getType( void ) const
{
	return ( this->_type );
}
