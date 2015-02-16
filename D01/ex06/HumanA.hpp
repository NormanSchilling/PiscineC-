/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:58:33 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 21:05:17 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string name, Weapon &w );
		~HumanA( void );

		void 	attack( void ) const;

	private:
		std::string	_name;
		Weapon 		&_w;	

};

#endif