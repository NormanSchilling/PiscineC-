/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 12:59:53 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 16:07:52 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant( void );
		SuperMutant( SuperMutant const & e );
		virtual ~SuperMutant();

		SuperMutant & operator=( SuperMutant const &e );

		virtual void takeDamage( int amount );

};

#endif
