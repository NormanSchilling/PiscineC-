/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:58:30 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 16:11:12 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>

class PowerFist : public AWeapon
{
	public:
		PowerFist( void );
		PowerFist( PowerFist const & aw );
		virtual ~PowerFist( void );

		PowerFist &operator=( PowerFist const &aw );

		virtual void 		attack() const;
};

#endif
