/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 10:42:06 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/11 20:35:10 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

#include "Game.hpp"
#include "Ship.hpp"

int main()
{
	srand(time(0));
    unsigned    startTime;
    unsigned    endTime;
    int         tmp;
    int 		frame;
   	Game 		*game = new Game();
       

   	frame = 60;
    game->initMap( );
   	game->initShipPlayer( );
    game->initShipEnemy( );
    while((tmp = getch()) != 27)
    {
        startTime = time( NULL );
        clear();
        game->initMap( );
        game->play( tmp );
        game->moveBullets( );
        game->moveEnemies( );
        game->check( );
        game->display( );
        game->moveMap( );
        mvprintw(20, 0, "Life: %d/50 | Score: %d ", game->_gameLife, game->_score);
        refresh();
        endTime = time( NULL );
        usleep( ( 3000000 / frame ) - ( endTime - startTime ));
    }

    delete game;

    return 0;
}
