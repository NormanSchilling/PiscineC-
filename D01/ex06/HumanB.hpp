/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:58:57 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 21:49:03 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB 
{
	public:
		HumanB( std::string name );
		~HumanB( void );

		void 	attack( void ) const;

		void 	setWeapon(Weapon w);
	private:
		std::string	_name;
		Weapon		*_w;
};

#endif