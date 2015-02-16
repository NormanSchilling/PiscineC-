/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 11:59:46 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/11 20:32:56 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <ncurses.h>

#include "Enemy.hpp"

class Game
{
	public:
		Game( void );
		Game( Game const &g );
		~Game( void );

		Game & operator=( Game const &g );

		void	init( void );
		void	initMap( void );
		void 	initShipPlayer( void );
		void 	initShipEnemy( void );

		void	play( int tmp );
		void	display( void );
		void 	moveEnemies( void );
		void 	moveBullets( void );
		void 	moveMap( void );
		void	check( void );
		int		getMaxHeight( void ) const;
		int		getMaxWidth( void ) const;

		int		_gameLife;
		int		_score;
	private:

		int		_maxHeight;
		int		_maxWidth;
		int		_numberEnemies;
		int		_moveMap;
		Ship	*_player;
		Enemy	*_enemies;


};

#endif



