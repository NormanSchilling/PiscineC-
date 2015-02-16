/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExceptionParamsMain.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 12:05:05 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 13:02:44 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "ExceptionParamsMain.hpp"


/**
	CONSTRUCTOR
**/
ExceptionParamsMain::ExceptionParamsMain( void ) : exception()
{
	this->_argc = 1;
	this->_min = 1;
	this->_max= 1;
	return ;
}

ExceptionParamsMain::ExceptionParamsMain( int argc, int min, int max ) : exception()
{
	this->_argc = argc;
	this->_min = min;
	this->_max= max;
	return ;
}

ExceptionParamsMain::ExceptionParamsMain( ExceptionParamsMain const & exceptionParamsMain ) : exception()
{
	*this = exceptionParamsMain;
	return ;
}

/**
	DESTRUCTOR
**/
ExceptionParamsMain::~ExceptionParamsMain( void ) throw()
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
ExceptionParamsMain & ExceptionParamsMain::operator=( ExceptionParamsMain const & exceptionParamsMain ) throw()
{
	(void)exceptionParamsMain;
	return *this;
}

/**
	FUNCTIONS
**/
void ExceptionParamsMain::errorBoard( void ) const throw()
{
	if ( this->_argc < this->_min ) {
		std::cout << this->notEnough( ) << std::endl;
	} else if ( this->_argc > this->_max ) {
		std::cout << this->tooMuch( ) << std::endl;
	}
}
const char* ExceptionParamsMain::tooMuch() const throw()
{
	return "ERROR: Too much params passed in your program !";
}
const char* ExceptionParamsMain::notEnough() const throw()
{
	return "ERROR: Not enough params passed in your program !";
}

/**
	GETTER
**/
int		ExceptionParamsMain::getARGC( void )
{
	return this->_argc;
}
int		ExceptionParamsMain::ExceptionParamsMain::getMin( void )
{
	return this->_min;
}
int		ExceptionParamsMain::getMax( void )
{
	return this->_max;
}