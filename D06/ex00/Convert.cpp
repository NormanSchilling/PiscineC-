/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 09:40:53 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 18:56:09 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Convert.hpp"

/**
	CONSTRUCTOR
**/
Convert::Convert( void )
{
	return ;
}
Convert::Convert( char * str ) : _str(str)
{
	return ;
}
Convert::Convert( Convert const & convert )
{
	*this = convert;
	return ;
}

/**
	DESTRUCTOR
**/
Convert::~Convert( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
Convert & Convert::operator=( Convert const & convert )
{
	if ( this != &convert ) {
		this->_str = convert.getStr( );
	}

	return *this;
}

/**
	FUNCTIONS
**/
void			Convert::displayConvert( void )
{
	this->parser( );
	std::cout << "char : '" << this->_c << "'" << std::endl;
	std::cout << "int : " << this->_i << std::endl;
	std::cout << "float : " << this->_f << "f"<< std::endl;
	std::cout << "double : " << this->_d << std::endl;
	return ;
}
void			Convert::parser( void )
{
	this->_d = strtod(this->_str, NULL);
	this->_i = static_cast<int>(this->_d);
	this->_f = static_cast<float>(this->_d);
	if ( this->_d == 0 )
		this->_c = '\0';
	else	
		this->_c = static_cast<char>(this->_i);
}

/**
	GETTER
**/
char	*Convert::getStr( void ) const
{
	return this->_str;
}