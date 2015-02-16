/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 09:57:26 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/09 11:47:50 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer( std::string name, std::string title );
		Sorcerer( Sorcerer const &ft );
		~Sorcerer( void );

		Sorcerer & operator=( Sorcerer const &s );

		void 			polymorph(Victim const &v) const;

		std::string		getName( void ) const;
		std::string		getTitle( void ) const;

	private:
		std::string 	_name;
		std::string		_title;
};

std::ostream & operator<<( std::ostream &o, Sorcerer const &s );

#endif