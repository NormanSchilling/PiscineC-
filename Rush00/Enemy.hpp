/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:42:13 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/11 20:22:40 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <ncurses.h>

#include "Ship.hpp"

class Enemy : public Ship
{
	public:
		Enemy(void);
		Enemy( int maxPosHeight, int maxPosWidth );
		Enemy( Enemy const &g );
		~Enemy( void );

		Enemy &operator=( Enemy const &g );

		int	move( int gameLife );
};

#endif