/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:59:16 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 15:55:37 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	public:
		Enemy( int hp, std::string const & type );
		Enemy( Enemy const & e );
		virtual ~Enemy();

		Enemy & operator=( Enemy const &e );

		virtual void takeDamage( int amount );

		int 			getHP() const;
		std::string  	getType() const;


	protected: 
		int				_hp;
		std::string		_type;
};

#endif