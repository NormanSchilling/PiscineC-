/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:38:36 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 18:35:50 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

/**
	CONSTRUCTOR
**/
Human::Human( void )
{
	this->_b = new Brain( );
	return ;
}

/**
	DESTRUCTOR
**/
Human::~Human( void )
{
	return ;
}

/**
	FUNCTIONS
**/
std::string Human::identify( void ) const
{	
	return ( this->_b->identify( ) );
}

/**
	GETTER
**/
const Brain &Human::getBrain( void ) const
{
	const Brain &b2 = *this->_b;
	return ( b2 );
}