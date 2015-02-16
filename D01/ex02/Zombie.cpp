/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:30:50 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 14:06:39 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

/**
	CONSTRUCTOR
**/
Zombie::Zombie( std::string type, std::string name ) : _type(type), _name(name)
{
	return ;
}

/**
	DESTRUCTOR
**/
Zombie::~Zombie( void )
{
	std::cout << this->_name << " is dead by a weapon ! " << std::endl;
	return ;
}

/**
	FUNCTIONS
**/

void	Zombie::announce( void )
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;

	return ;
}

/**
	GETTER
**/
std::string		Zombie::getType( void ) const
{
	return this->_type;
}
std::string		Zombie::getName( void ) const
{
	return this->_name;
}
