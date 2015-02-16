/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:58:38 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 12:39:04 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon( std::string name );
		Peon( Peon const &p );
		virtual ~Peon( void );

		virtual Peon & operator=( Peon const &p );

		virtual void 	getPolymorphed( void ) const;
};

#endif