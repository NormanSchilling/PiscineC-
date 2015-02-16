/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:58:24 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 21:02:10 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

/**
	CONSTRUCTOR
**/
HumanA::HumanA( std::string name, Weapon &w) : _name(name), _w(w)
{
	return ;
}

/**
	DESTRUCTOR
**/
HumanA::~HumanA( void )
{
	return ;
}

/**
	FUNCTIONS
**/
void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with his " << this->_w.getType( ) << std::endl;

	return ;
}

/**
	GETTER
**/
