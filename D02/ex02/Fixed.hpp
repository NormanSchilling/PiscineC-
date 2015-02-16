/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 10:25:16 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/07 18:59:44 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
	public:
		Fixed( void );
		Fixed( const int i );
		Fixed( const float fl );
		Fixed( Fixed const &f );
		~Fixed( void );

		Fixed & operator=( Fixed const &f );
		Fixed operator+( Fixed const &f );
		Fixed operator*( Fixed const &f );
		Fixed operator-( Fixed const &f );
		Fixed operator/( Fixed const &f );

		Fixed operator++( void );
		Fixed operator--( void );
		Fixed operator++( int );
		Fixed operator--( int );

		bool operator<( Fixed const &f );
		bool operator>( Fixed const &f );
		bool operator<=( Fixed const &f );
		bool operator>=( Fixed const &f );
		bool operator==( Fixed const &f );
		bool operator!=( Fixed const &f );

		static Fixed min( Fixed &f, Fixed &f2 );
		static const Fixed & min( Fixed const &f, Fixed const &f2 );
		static Fixed max( Fixed &f, Fixed &f2 );
		static const Fixed & max( Fixed const &f, Fixed const &f2 );

		float 	toFloat( void ) const;
		int 	toInt( void ) const; 
		int 	getRawBits( void ) const;

		void 	setRawBits( int const raw );

	private:
		int			_rawBits;
		const int	_fractionnalBits;

};

std::ostream & operator<<( std::ostream &o, Fixed const &f );


#endif