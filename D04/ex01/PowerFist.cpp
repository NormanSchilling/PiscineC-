/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:58:18 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 16:56:22 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PowerFist.hpp"

/**
	CONSTRUCTOR
**/
PowerFist::PowerFist( void ) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist( PowerFist const & aw ) : AWeapon(aw)
{
	return ;
}

/**
	DESTRUCTOR
**/
PowerFist::~PowerFist( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
PowerFist &PowerFist::operator=( PowerFist const &aw )
{
	AWeapon::operator=( aw );

	return *this;
}

/**
	FUNCTIONS
**/
void 				PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}