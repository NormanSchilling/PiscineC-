/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 13:29:38 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/11 19:24:23 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
#define BULLET_HPP

#include <iostream>
#include <ncurses.h>

class Enemy;

class Bullet
{
	public:
		Bullet(void);
		Bullet( int posShipY, int posShipX, int	maxPosHeight, int maxPosWidth );
		Bullet( Bullet const &b );
		~Bullet( void );

		Bullet &operator=( Bullet const &b );

		void	move( void );

		int		getDamage( void ) const;
		int		getPosX( void ) const;
		int		getPosY( void ) const;;

		void	setPosX( int posX );
		void	setPosY( int posY );

	protected:
		int		_posX;
		int		_posY;
		int		_maxPosHeight;
		int		_maxPosWidth;
		int		_damage;

};

#endif