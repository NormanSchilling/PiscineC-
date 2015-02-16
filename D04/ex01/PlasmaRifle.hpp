/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:57:46 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 15:10:50 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle( void );
		PlasmaRifle( PlasmaRifle const & aw );
		~PlasmaRifle( void );

		PlasmaRifle &operator=( PlasmaRifle const &aw );

		virtual void 		attack() const;
};

#endif