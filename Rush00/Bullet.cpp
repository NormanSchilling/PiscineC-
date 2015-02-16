/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 13:29:45 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/11 19:27:58 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <ctime>
#include <cstdlib>

#include "Bullet.hpp"
#include "Enemy.hpp"

/**
	CONSTRUCTOR
**/
Bullet::Bullet( int posShipY, int posShipX, int	maxPosHeight, int maxPosWidth )
{
	this->_damage = 30;
	this->_posX = posShipX;
	this->_posY = posShipY;
	this->_maxPosWidth = maxPosWidth;
	this->_maxPosHeight = maxPosHeight;

	return ;
}
Bullet::Bullet( Bullet const &b )
{
	*this = b;
	return ;
}

/**
	DESTRUCTOR
**/
Bullet::~Bullet( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
Bullet &Bullet::operator=( Bullet const &b )
{
	if ( this != &b ) {
		this->_damage = b.getDamage( );
		this->_posX = b.getPosX( );
		this->_posY = b.getPosY( );
	}

	return *this;
}

/**
	FUNCTIONS
**/
void	Bullet::move( void )
{
	if ( this->_posX >= this->_maxPosWidth ) {
		this->_posX = 0;
		this->_posY = 0;
	} else {
		this->_posX++;
	}
}

/**
	GETTER
**/
int		Bullet::getDamage( void ) const
{
	return this->_damage;
}
int		Bullet::getPosX( void ) const
{
	return this->_posX;
}
int		Bullet::getPosY( void ) const
{
	return this->_posY;
}

/**
	SETTER
**/
void	Bullet::setPosX( int posX )
{
	this->_posX = posX;
}
void	Bullet::setPosY( int posY )
{
	this->_posY = posY;
}
