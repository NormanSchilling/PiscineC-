/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 19:04:13 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 20:19:30 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap( void );
		NinjaTrap( std::string name );
		NinjaTrap( NinjaTrap const &ft );
		~NinjaTrap( void );

		NinjaTrap & operator=( NinjaTrap const &ft );

		void ninjaShoebox( ClapTrap & ct );
		void ninjaShoebox( NinjaTrap & nt );
		void ninjaShoebox( ScavTrap & st );
		void ninjaShoebox( FragTrap & ft );
};

#endif