/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:58:41 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 21:51:38 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

/**
	CONSTRUCTOR
**/
HumanB::HumanB( std::string name ) : _name(name)
{
	return ;
}

/**
	DESTRUCTOR
**/
HumanB::~HumanB( void )
{
	return ;
}

/**
	FUNCTIONS
**/
void	HumanB::attack( void ) const
{
	std::cout << this->_name << " attacks with his " << this->_w->getType( ) << std::endl;

	return ;
}

/**
	SETTER
**/
void 	HumanB::setWeapon(Weapon w)
{
	Weapon *w2 = &w;
	this->_w = w2;
}

/**
	GETTER
**/

