/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 13:05:26 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 16:47:08 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:
		Character( std::string const & name );
		Character( Character const & c );
		~Character( void );

		Character &operator=( Character const &c );

		void 			recoverAP( void );
		void 			equip( AWeapon *aw);
		void 			attack( Enemy *e );

		std::string 	getName( void ) const;
		int				getAP( void ) const;
		AWeapon 		*getWeapon( void ) const;

	private:
		std::string 	_name;
		int				_ap;
		AWeapon			*_w;
};

std::ostream & operator<<( std::ostream &o, Character const &c );

#endif