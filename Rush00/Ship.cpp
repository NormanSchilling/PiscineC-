/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 11:36:42 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/11 19:56:24 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <ctime>
#include <cstdlib>
#include "Ship.hpp"
#include "Enemy.hpp"

/**
	CONSTRUCTOR
**/
Ship::Ship( int maxPosHeight, int maxPosWidth ) : _maxPosHeight(maxPosHeight), _maxPosWidth(maxPosWidth)
{
	this->_hp = 100;
	this->_posX = 0;
	this->_posY = (this->_maxPosHeight / 2) - 1;
	this->_currentBullet = 0;

	return ;
}
Ship::Ship( Ship const &s )
{
	*this = s;
	return ;
}

/**
	DESTRUCTOR
**/
Ship::~Ship( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
Ship &Ship::operator=( Ship const &s )
{
	if ( this != &s ) {
		this->_hp = s.getHP( );
		this->_posX = s.getPosX( );
		this->_posY = s.getPosY( );
		this->_maxPosHeight = s.getMaxPosHeight( );
		this->_maxPosWidth = s.getMaxPosWidth( );
	}

	return *this;
}

// /**
// 	FUNCTIONS
// **/
void	Ship::moveShip( int tmp )
{
	if ( tmp == KEY_DOWN ) {
		if ( this->collisionShipBottom( ) == 0)
			this->_posY = this->_posY + 1;
	} else if (tmp == KEY_UP ) {
		if ( this->collisionShipTop( ) == 0)
			this->_posY = this->_posY - 1;
	} else if (tmp == KEY_LEFT ) {
		if ( this->collisionShipLeft( ) == 0)
			this->_posX = this->_posX - 2;
	} else if (tmp == KEY_RIGHT ) {
		if ( this->collisionShipRight( ) == 0)
			this->_posX = this->_posX + 2;
	}

}

void	Ship::attack( int tmp )
{
	if ( tmp == ' ') {
		if ( this->_currentBullet == 150 ) {
			this->_currentBullet = 0;
			this->_bullets[this->_currentBullet]->setPosX( this->_posY );
			this->_bullets[this->_currentBullet]->setPosX( this->_posX );
		} else {
			this->_bullets[this->_currentBullet] = new Bullet( this->_posY, this->_posX, this->_maxPosHeight, this->_maxPosWidth );
			this->_bullets[this->_currentBullet]->move( );
			this->_currentBullet++;
		}
	}

	return ;
}

int		Ship::collisionShipTop( void )
{
	if ( this->_posY == 1 )
		return 1;
	return 0;
}
int		Ship::collisionShipBottom( void )
{
	if ( this->_posY == this->_maxPosHeight - 1 )
		return 1;
	return 0;
}
int		Ship::collisionShipLeft( void )
{
	if ( this->_posX == 0 )
		return 1;
	return 0;
}
int		Ship::collisionShipRight( void )
{
	if ( this->_posX == (this->_maxPosWidth / 2) + 2 )
		return 1;
	return 0;

}
/**
	GETTER
**/
int		Ship::getType( void ) const
{
	return this->_type;
}
int		Ship::getHP( void ) const
{
	return this->_hp;
}
int		Ship::getPosX( void ) const
{
	return this->_posX;
}
int		Ship::getPosY( void ) const
{
	return this->_posY;
}
int		Ship::getMaxPosHeight( void ) const
{
	return this->_maxPosHeight;
}
int		Ship::getMaxPosWidth( void ) const
{
	return this->_maxPosWidth;
}

/**
	SETTER
**/
void		Ship::setHP( int hp )
{
	this->_hp = hp;
}
void		Ship::setPosX( int posX )
{
	this->_posX = posX;
}
void		Ship::setPosY( int posY )
{
	this->_posY = posY;
}
void		Ship::setType( void )
{
	this->_type = rand() % 2;
}

