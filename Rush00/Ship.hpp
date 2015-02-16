/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 11:36:52 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/11 19:55:54 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_HPP
#define SHIP_HPP

#include <iostream>
#include <ncurses.h>

#include "Bullet.hpp"


class Enemy;

class Ship
{
	public:
		Ship( int maxPosHeight, int maxPosWidth );
		Ship( Ship const &s );
		~Ship( void );

		Ship &operator=( Ship const &s );

		void	moveShip( int tmp );
		void	attack( int tmp );
		int		collisionShipTop( void );
		int		collisionShipBottom( void );
		int		collisionShipLeft( void );
		int		collisionShipRight( void );

		int		getType( void ) const;
		int		getHP( void ) const;
		int		getPosX( void ) const;
		int		getPosY( void ) const;
		int		getMaxPosHeight( void ) const;
		int		getMaxPosWidth( void ) const;

		void		setType( void );
		void		setHP( int hp );
		void		setPosX( int posX );
		void		setPosY( int posY );

		int		_currentBullet;
		Bullet	*_bullets[150];

	protected:
		int		_type;
		int		_hp;
		int		_posX;
		int		_posY;
		int		_maxPosHeight;
		int		_maxPosWidth;



};

#endif