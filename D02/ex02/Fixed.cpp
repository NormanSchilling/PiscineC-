/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 10:25:06 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/07 19:18:51 by nschilli         ###   ########.fr       */
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
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed( const int i  ) : _fractionnalBits(8)
{
	this->_rawBits = i << this->_fractionnalBits;

	return ;
}

Fixed::Fixed( const float fl  ) : _fractionnalBits(8)
{
	this->_rawBits = int( roundf( fl * pow( 2, this->_fractionnalBits ) ) );

	return ;
}

Fixed::Fixed( Fixed const &f ) : _fractionnalBits(8)
{
	*this = f;
	return ;
}

/**
	DESTRUCTOR
**/
Fixed::~Fixed( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
Fixed &Fixed::operator=( Fixed const &f ) 
{
	if ( this != &f )
    	this->_rawBits = f.getRawBits( );

    return *this;
}

Fixed Fixed::operator+( Fixed const &f )
{
	return Fixed( this->toFloat( ) + f.toFloat( ) );
}

Fixed Fixed::operator*( Fixed const &f )
{
	return Fixed( this->toFloat( ) * f.toFloat( ) );
}

Fixed Fixed::operator-( Fixed const &f )
{
	return Fixed( this->toFloat( ) - f.toFloat( ) );
}

Fixed Fixed::operator/( Fixed const &f )
{
	if ( f.getRawBits( ) != 0 )
		return Fixed( this->toFloat( ) / f.toFloat( ) ) ;
	else
		return Fixed( this->toFloat( ) / 1 );
}

Fixed Fixed::operator++( void )
{
   this->_rawBits++;
   return *this;
}

Fixed Fixed::operator--( void )
{
   this->_rawBits--;
   return *this;
}

Fixed Fixed::operator++( int )
{
 	Fixed copyTmp = *this;
 	this->_rawBits++;
 	return copyTmp;
}

Fixed Fixed::operator--( int )
{
 	Fixed copyTmp = *this;
 	this->_rawBits--;
 	return copyTmp;
}

bool Fixed::operator<( Fixed const &f )
{
	return ( this->toFloat( ) < f.toFloat( ) );
}

bool Fixed::operator>( Fixed const &f )
{
	return ( this->toFloat( ) > f.toFloat( ) );
}

bool Fixed::operator<=( Fixed const &f )
{
	return ( this->toFloat( ) <= f.toFloat( ) );
}

bool Fixed::operator>=( Fixed const &f )
{
	return ( this->toFloat( ) >= f.toFloat( ) );
}

bool Fixed::operator==( Fixed const &f )
{
	return ( this->toFloat( ) == f.toFloat( ) );
}
bool Fixed::operator!=( Fixed const &f )
{
	return ( this->toFloat( ) != f.toFloat( ) );
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
	return (this->_rawBits >> this->_fractionnalBits);
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

Fixed Fixed::min( Fixed &f, Fixed &f2 )
{
	if ( f.getRawBits( ) < f2.getRawBits( ) )
		return ( f );
	else
		return ( f2 );
}

const Fixed & Fixed::min( Fixed const &f, Fixed  const &f2 )
{
	if ( f.getRawBits( ) < f2.getRawBits( ) )
		return ( f );
	else
		return ( f2 );
}

Fixed Fixed::max( Fixed &f, Fixed &f2 )
{
	if ( f.getRawBits( ) < f2.getRawBits( ) )
		return ( f2 );
	else
		return ( f );
}

const Fixed & Fixed::max( Fixed const &f, Fixed  const &f2 )
{
	if ( f.getRawBits( ) < f2.getRawBits( ) )
		return ( f2 );
	else
		return ( f );
}


