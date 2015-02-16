/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:56:49 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 15:48:12 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	public:
		AWeapon( std::string const & name, int apcost, int damage );
		AWeapon( AWeapon const & aw );
		virtual ~AWeapon( void );

		AWeapon &operator=( AWeapon const &aw );

		virtual void 		attack() const = 0;

		int 				getAPCost() const;
		int 				getDamage() const;
		std::string 		getName() const;

	protected:
		std::string			_name;
		int					_apcost;
		int					_damage;	
};

#endif