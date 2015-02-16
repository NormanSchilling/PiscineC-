/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 13:04:58 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 16:11:41 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion( void );
		RadScorpion( RadScorpion const & e );
		virtual ~RadScorpion();

		RadScorpion & operator=( RadScorpion const &e );

		virtual void takeDamage( int amount );

};

#endif
