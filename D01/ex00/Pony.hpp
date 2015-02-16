/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:26:36 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 11:09:47 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony 
{
	public:
		Pony( std::string name, std::string color, std::string weight );
		~Pony( void );

		std::string		getName( void ) const;
		std::string		getColor( void ) const;
		std::string		getWeight( void ) const;

		std::string		setName( std::string _name );
		std::string		setColor( std::string _color );
		std::string		setWeight( std::string _weight );

	private:
		std::string 	_name;
		std::string 	_color;
		std::string 	_weight;

};