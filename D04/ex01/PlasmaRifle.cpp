/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:57:30 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 16:56:07 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

/**
	CONSTRUCTOR
**/
PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & aw ) : AWeapon(aw)
{
	return ;
}

/**
	DESTRUCTOR
**/
PlasmaRifle::~PlasmaRifle( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
PlasmaRifle &PlasmaRifle::operator=( PlasmaRifle const &aw )
{
	AWeapon::operator=( aw );

	return *this;
}

/**
	FUNCTIONS
**/
void 				PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}

/**
	GETTER
**/