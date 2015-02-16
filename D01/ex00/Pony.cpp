/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:26:25 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 11:08:21 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

/**
	CONSTRUCTOR
**/
Pony::Pony( std::string name, std::string color, std::string weight ) : _name(name), _color(color), _weight(weight) 
{
	std::cout << "The pony " << this->_name << " is born." << std::endl;
	return ;
}

/**
	DESTRUCTOR
**/
Pony::~Pony( void )
{
	std::cout << "The pony " << this->_name << " is dead." << std::endl;
	return ;
}


/**
	GETTER
**/
std::string		Pony::getName( void ) const
{
	return this->_name;
}
std::string		Pony::getColor( void ) const
{
	return this->_color;
}
std::string		Pony::getWeight( void ) const
{
	return this->_weight;
}


/**
	SETTER
**/
std::string			Pony::setName( std::string _name )
{
	this->_name = _name;
	return this->_name;
}
std::string			Pony::setColor( std::string _color )
{
	this->_color = _color;
	return this->_color;
}
std::string			Pony::setWeight( std::string _weight )
{
	this->_weight = _weight;
	return this->_weight;
}
