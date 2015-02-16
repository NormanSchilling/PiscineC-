/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 11:59:54 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/11 20:35:48 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include "Game.hpp"

/**
	CONSTRUCTOR
**/
Game::Game( void ) : _gameLife(50), _score(0), _maxHeight(18), _maxWidth(150)
{
	this->init( );
	this->_moveMap = this->_maxWidth + 1;
	return ;
}
Game::Game( Game const &g )
{
	*this = g;
	return ;
}

/**
	DESTRUCTOR
**/
Game::~Game( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
Game &Game::operator=( Game const &g )
{
	if ( this != &g ) {
		this->_maxHeight = g.getMaxHeight( );
		this->_maxWidth = g.getMaxWidth( );
	}

	return *this;
}

/**
	FUNCTIONS
**/
void Game::init( void )
{
	initscr( );
	nodelay(stdscr, true);
	start_color( );
	WINDOW* win;

	win = newwin(this->_maxHeight, this->_maxWidth, 0, 0);
	wrefresh( win );
	keypad( stdscr, true );
	noecho( );
	curs_set( 0 );

	return ;
}
void Game::initMap( void )
{
	int i;

	i = 0;
	while ( i < this->_maxWidth ) {
		move(0, i);
		addch( '=' );
		i++;
	}

	i = 0;
	while ( i < this->_maxWidth ) {
		move(this->_maxHeight, i);
		addch( '=' );
		i++;
	}

	return ;
}

void	Game::initShipPlayer( void )
{
	this->_player = new Ship( this->_maxHeight, this->_maxWidth );

	move(this->_player->getPosY(), this->_player->getPosX());

	init_pair(1, COLOR_YELLOW, COLOR_BLACK );
	attron( COLOR_PAIR(1) );
	addstr( "()=" );
	attroff( COLOR_PAIR(1) );

	return ;
}

void 	Game::initShipEnemy( void )
{
	int i;

	Enemy *e = new Enemy(this->_maxHeight,this->_maxWidth ); 
	std::cout << e->getPosY() << std::endl;

	this->_numberEnemies = (rand() % 6) + 6;
	this->_enemies = new Enemy[this->_numberEnemies];

	i = 0;
	while ( i < this->_numberEnemies ) {
		move(this->_enemies[i].getPosY( ), this->_enemies[i].getPosX( ));
		if ( this->_enemies[i].getType( ) == 0 ) {
			init_pair(2, COLOR_RED, COLOR_BLACK );
			attron( COLOR_PAIR(2) );
			addstr( "-|" );
			attroff( COLOR_PAIR(2) );
		} else if (this->_enemies[i].getType( ) == 1 ){
			init_pair(6, COLOR_GREEN, COLOR_BLACK );
			attron( COLOR_PAIR(6) );
			addstr( "=0" );
			attroff( COLOR_PAIR(6) );
		}
		i++;
	}

	return ;
}


void	Game::play( int tmp )
{
	this->_player->moveShip( tmp );
	this->_player->attack( tmp );

	return ;
}
void	Game::check( void )
{
	for ( int i  = 0; i < this->_player->_currentBullet; i++ ) {
		for ( int j = 0; j < this->_numberEnemies; j++ ) {
			if ( this->_enemies[j].getPosY() == this->_player->_bullets[i]->getPosY() 
				&& this->_enemies[j].getPosX() == this->_player->_bullets[i]->getPosX() ) {
				this->_enemies[j].setHP( this->_enemies[j].getHP() - this->_player->_bullets[i]->getDamage() );
				if (this->_enemies[j].getHP() <= 0 ) {
					this->_enemies[j].setPosX( this->_player->getMaxPosWidth() + (rand() % 20) );
					this->_enemies[j].setPosY( (rand() % this->_player->getMaxPosHeight()) + 1 );
					this->_enemies[j].setType( );
					this->_player->_bullets[i]->setPosY( 0 );
					this->_player->_bullets[i]->setPosX( 0 );
					if (this->_enemies[j].getType( ) == 0) {
						this->_score++;
					} else {
						this->_score = this->_score + 2;
					}
				}
			}
		}
	}
	return ;
}

void	Game::display( void )
{
	move(this->_player->getPosY(), this->_player->getPosX());

	init_pair(1, COLOR_YELLOW, COLOR_BLACK );
	attron( COLOR_PAIR(1) );
	addstr( "()=" );
	attroff( COLOR_PAIR(1) );

	int i;

	i = 0;
	while ( i < this->_numberEnemies ) {
		move(this->_enemies[i].getPosY( ), this->_enemies[i].getPosX( ));
		if ( this->_enemies[i].getType( ) == 0 ) {
			init_pair(2, COLOR_RED, COLOR_BLACK );
			attron( COLOR_PAIR(2) );
			addstr( "-|" );
			attroff( COLOR_PAIR(2) );
		} else if (this->_enemies[i].getType( ) == 1 ){
			init_pair(6, COLOR_GREEN, COLOR_BLACK );
			attron( COLOR_PAIR(6) );
			addstr( "=0" );
			attroff( COLOR_PAIR(6) );
		}
		i++;
	}

	i = 0;
	while ( i < this->_player->_currentBullet ) {
		if (this->_player->_bullets[i]->getPosX() == 0) {
			init_pair(4, COLOR_BLACK, COLOR_BLACK );
			attron( COLOR_PAIR(4) );
			addstr( ">" );
			attroff( COLOR_PAIR(4) );
		} else {
			move(this->_player->_bullets[i]->getPosY(), this->_player->_bullets[i]->getPosX() );
			init_pair(3, COLOR_YELLOW, COLOR_BLACK );
			attron( COLOR_PAIR(3) );
			addstr( ">" );
			attroff( COLOR_PAIR(3) );
		}
		i++;
	}

}

void	Game::moveEnemies( void )
{
	int i;

	i = 0;
	while ( i < this->_numberEnemies ) {
		this->_gameLife = this->_enemies[i].move( this->_gameLife );
		i++;
	}

	return ;
}
void	Game::moveBullets( void )
{
	int i;

	i = 0;
	while ( i < this->_player->_currentBullet ) {
		if (this->_player->_bullets[i]->getPosX( ) > 0 )
			this->_player->_bullets[i]->move( );
		i++;
	}
}
void 	Game::moveMap( void )
{
	if (this->_moveMap <= 0 )
		this->_moveMap = this->_maxWidth + 1;
	move(0, this->_moveMap);
	init_pair(5, COLOR_YELLOW, COLOR_BLACK );
	attron( COLOR_PAIR(5) );
	addch( '|' );
	attroff( COLOR_PAIR(5) );
	move(0, this->_moveMap - 1);
	attron( COLOR_PAIR(5) );
	addch( '|' );
	attroff( COLOR_PAIR(5) );
	move(0, this->_moveMap - 2);
	attron( COLOR_PAIR(5) );
	addch( '|' );
	attroff( COLOR_PAIR(5) );


	move(this->_maxHeight, this->_moveMap);
	attron( COLOR_PAIR(5) );
	addch( '|' );
	attroff( COLOR_PAIR(5) );
	move(this->_maxHeight, this->_moveMap - 1);
	attron( COLOR_PAIR(5) );
	addch( '|' );
	attroff( COLOR_PAIR(5) );
	move(this->_maxHeight, this->_moveMap - 2);
	attron( COLOR_PAIR(5) );
	addch( '|' );
	attroff( COLOR_PAIR(5) );

	this->_moveMap--;
	return ;
}

/**
	GETTER
**/
int		Game::getMaxHeight( void ) const
{
	return this->_maxHeight;
}
int		Game::getMaxWidth( void ) const
{
	return this->_maxWidth;
}
