/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 13:05:15 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 17:06:30 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"


/**
	CONSTRUCTOR
**/
Character::Character( std::string const & name ) : _name(name), _ap(40)
{
	return ;
}

Character::Character( Character const & c )
{
	*this = c;

	return ;
}

/**
	DESTRUCTOR
**/
Character::~Character( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
Character &Character::operator=( Character const &c )
{
	if ( this != &c ) {
		this->_name = c.getName( );
	}

	return *this;
}

std::ostream & operator<<( std::ostream &o, Character const &c )
{
	if ( c.getWeapon() ) {
		o << c.getName( ) << " has " << c.getAP( ) << " AP and wields a  " << c.getWeapon()->getName( ) << std::endl;
	} else {
		o << c.getName( ) << " has " << c.getAP( ) << " AP and is unarmed" << std::endl;
	}

	return o;
}


/**
	FUNCTIONS
**/
void 			Character::recoverAP( void )
{
	if ( this->_ap < 40 ) {
		this->_ap = this->_ap + 10;
		if ( this->_ap > 40 )
			this->_ap = 40;
	}

	return ;
}

void 			Character::equip( AWeapon *aw)
{
	this->_w = aw;

	return ;
}

void 			Character::attack( Enemy *e )
{
	if ( this->_w ) {
		std::cout << this->_name << " attacks " << e->getType( ) << " with a " << this->_w->getName( )  << std::endl;
		this->_w->attack( );
		if ( this->_ap > this->_w->getAPCost( ) ) {
			this->_ap = this->_ap - this->_w->getAPCost( );
			e->takeDamage( this->_w->getDamage( ) );
			if ( e->getHP( ) <= 0 )
				delete e;
		}
	}
	return ;
}


/**
	GETTER
**/
std::string Character::getName( void ) const
{
	return this->_name;
}
int			Character::getAP( void ) const
{
	return this->_ap;
}
AWeapon 		*Character::getWeapon( void ) const
{
	return this->_w;
}
