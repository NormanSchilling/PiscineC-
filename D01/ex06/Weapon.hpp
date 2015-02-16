/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:58:02 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/07 09:23:07 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>


class Weapon 
{
	public:
		Weapon( std::string type );
		~Weapon( void );

		std::string getType( void ) const;
		void		setType( const std::string& type );

	private:
		std::string		&_type;

};

#endif