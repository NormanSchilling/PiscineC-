/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:31:03 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 15:33:16 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
	public:
		Zombie( void );
		~Zombie( void );

		void			announce( void );

		std::string		getType( void ) const;
		std::string		getName( void ) const;

		void			setType( std::string type );
		void			setName( std::string name );

	private:
		std::string 	_type;
		std::string 	_name;

};

#endif
