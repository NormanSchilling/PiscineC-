/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 10:25:06 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/07 11:51:19 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

/**
	CONSTRUCTOR
**/
Fixed::Fixed( void ) : _n(8)
{
	std::cout << "Default constructor called" << std::endl;
	this->_i = 0;
	return ;
}

Fixed::Fixed( Fixed const &f ) : _n(8)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
	return ;
}

/**
	DESTRUCTOR
**/
Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/**
	ASSIGN OPERATOR
**/
Fixed &Fixed::operator=( Fixed const &f ) 
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &f )
    	this->_i = f.getRawBits( );

    return *this;
}

/**
	GETTER
**/
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_i;
}

/**
	SETTER
**/
void Fixed::setRawBits( int const raw )
{
	this->_i = raw;
}