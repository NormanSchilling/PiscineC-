/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:59:05 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 15:53:19 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"

/**
	CONSTRUCTOR
**/
Enemy::Enemy( int hp, std::string const & type ) : _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy( Enemy const & e )
{
	*this = e;

	return ;
}

/**
	DESTRUCTOR
**/
Enemy::~Enemy( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
Enemy &Enemy::operator=( Enemy const &e )
{
	if ( this != &e ) {
		this->_hp = e.getHP( );
		this->_type = e.getType( );
	}

	return *this;
}

/**
	FUNCTIONS
**/
void Enemy::takeDamage( int amount )
{
	if ( amount >= 0 )
		this->_hp = this->_hp - amount;
}

/**
	GETTER
**/
int 			Enemy::getHP() const
{
	return this->_hp;
}
std::string  	Enemy::getType() const
{
	return this->_type;
}