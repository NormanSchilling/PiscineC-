/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:31:03 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 14:31:21 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
	public:
		Zombie( std::string type, std::string name );
		~Zombie( void );

		void			announce( void );

		std::string		getType( void ) const;
		std::string		getName( void ) const;

	private:
		std::string 	_type;
		std::string 	_name;

};

#endif
