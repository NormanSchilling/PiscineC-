/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 13:04:48 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 16:13:33 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"
#include "RadScorpion.hpp"

/**
	CONSTRUCTOR
**/
RadScorpion::RadScorpion( void ) : Enemy( 80, "RadScorpion" )
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion( RadScorpion const & e ) : Enemy(e)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

/**
	DESTRUCTOR
**/
RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

/**
	ASSIGN OPERATOR
**/
RadScorpion &RadScorpion::operator=( RadScorpion const &e )
{
	Enemy::operator=( e );

	return *this;
}

/**
	FUNCTIONS
**/
void RadScorpion::takeDamage( int amount )
{
	if ( amount >= 0 )
		this->_hp = this->_hp - amount;
}