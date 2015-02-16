/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:37:57 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 18:26:55 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Brain.hpp"

/**
	CONSTRUCTOR
**/
Brain::Brain( void )
{
	return ;
}

/**
	DESTRUCTOR
**/
Brain::~Brain( void )
{
	return ;
}

/**
	FUNCTIONS
**/
std::string Brain::identify( void ) const
{	
	std::ostringstream oss;
    oss << ( void* )this;
    std::string adressBrain( oss.str( ) );

	return ( adressBrain );
}

/**
	GETTER
**/
