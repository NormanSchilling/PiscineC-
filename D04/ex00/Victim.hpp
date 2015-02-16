/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:57:52 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 12:38:24 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>


class Victim
{
	public:
		Victim( std::string name );
		Victim( Victim const &v );
		virtual ~Victim( void );

		Victim & operator=( Victim const &s );

		virtual void 	getPolymorphed( void ) const;

		std::string		getName( void ) const;

	protected:
		std::string 	_name;
};

std::ostream & operator<<( std::ostream &o, Victim const &s );

#endif