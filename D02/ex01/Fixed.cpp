/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 10:25:06 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/07 14:40:39 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

/**
	CONSTRUCTOR
**/
Fixed::Fixed( void ) : _fractionnalBits(8)
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed( const int i  ) : _fractionnalBits(8)
{
	this->_rawBits = int( roundf( i * pow( 2, this->_fractionnalBits ) ) );

	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float fl  ) : _fractionnalBits(8)
{

	this->_rawBits = int( roundf( fl * pow( 2, this->_fractionnalBits ) ) );
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const &f ) : _fractionnalBits(8)
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
    	this->_rawBits = f.getRawBits( );

    return *this;
}

std::ostream & operator<<( std::ostream &o, Fixed const &f )
{
     o << f.toFloat( );
    return o;
}

/**
	GETTER
**/
float Fixed::toFloat( void ) const
{

	return float( this->_rawBits / pow( 2, this->_fractionnalBits ) );
}

int Fixed::toInt( void ) const
{
	return int( this->_rawBits	 / pow( 2, this->_fractionnalBits ) );
}

int Fixed::getRawBits( void ) const
{
	return this->_rawBits;
}

/**
	SETTER
**/
void Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
}