/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:57:00 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 14:57:10 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"

/**
	CONSTRUCTOR
**/
AWeapon::AWeapon( std::string const & name, int apcost, int damage ) : _name(name), _apcost(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon( AWeapon const & aw )
{
	*this = aw;

	return ;
}

/**
	DESTRUCTOR
**/
AWeapon::~AWeapon( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
AWeapon &AWeapon::operator=( AWeapon const &aw )
{
	if ( this != &aw ) {
		this->_name = aw.getName( );
		this->_apcost = aw.getAPCost( );
		this->_damage = aw.getDamage( );
	}

	return *this;
}

/**
	FUNCTIONS
**/
void 				AWeapon::attack() const
{
	return ;
}

/**
	GETTER
**/
std::string AWeapon::getName( void ) const
{
	return this->_name;
}
int		 	AWeapon::getAPCost( void ) const
{
	return this->_apcost;
}
int			AWeapon::getDamage( void ) const
{
	return this->_damage;
}
