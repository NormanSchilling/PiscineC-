/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:59:39 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 16:14:45 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"
#include "SuperMutant.hpp"

/**
	CONSTRUCTOR
**/
SuperMutant::SuperMutant( void ) : Enemy( 170, "Super Mutant" )
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const & e ) : Enemy(e)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

/**
	DESTRUCTOR
**/
SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

/**
	ASSIGN OPERATOR
**/
SuperMutant &SuperMutant::operator=( SuperMutant const &e )
{
	Enemy::operator=( e );

	return *this;
}

/**
	FUNCTIONS
**/
void SuperMutant::takeDamage( int amount )
{
	amount = amount - 3;
	if ( amount >= 0 )
		this->_hp = this->_hp - amount;
}

