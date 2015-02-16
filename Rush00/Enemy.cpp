/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:42:05 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/11 20:31:23 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <ncurses.h>
#include <ctime>
#include <cstdlib>

#include "Enemy.hpp"

/**
	CONSTRUCTOR
**/
Enemy::Enemy( void ) : Ship(18 , 150)
{
	if (rand() % 2 == 0 ) {
		this->_hp = 10;
		this->_type = 0;
	} else {
		this->_hp = 40;
		this->_type = 1;
	}
	this->_posX = this->_maxPosWidth + (rand() % 20);
	this->_posY = (rand() % this->_maxPosHeight) + 1;
	if (this->_posY == 0)
		this->_posY = this->_posY + 1;
	else if ( this->_posY >= 17 )
		this->_posY = 16;

	return ;
}
Enemy::Enemy( int maxPosHeight, int maxPosWidth ) : Ship(maxPosHeight , maxPosWidth)
{
	this->_hp = 10;
	this->_posX = 98;
	this->_posY = (rand() % this->_maxPosHeight) + 1;
	if (this->_posY == 0)
		this->_posY = this->_posY + 1;
	else if ( this->_posY >= 17 )
		this->_posY = 16;

	return ;
}
Enemy::Enemy( Enemy const &e ) : Ship(e)
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
	Ship::operator=( e);

	return *this;
}

/**
	FUNCTIONS
**/
int	Enemy::move( int gameLife )
{
	if ( this->_posX == 0) {
		this->_posX = this->_maxPosWidth - 2;
		this->_posY = (rand() % this->_maxPosHeight) + 1;
		gameLife--;
		if (this->_posY == 0)
			this->_posY = this->_posY + 1;
		else if ( this->_posY >= 17 )
			this->_posY = 16;
	} else {
		if ( this->_type == 0 ) {
			this->_posX--;
		} else {
			if ( rand() % 3 == 0 )
				this->_posX = this->_posX - 2;
		}
	}
	return gameLife;
}

/**
	GETTER
**/
