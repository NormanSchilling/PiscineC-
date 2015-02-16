/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 10:25:16 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/07 11:29:32 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
	public:
		Fixed( void );
		Fixed( Fixed const &f );
		~Fixed( void );

		Fixed & operator=( Fixed const &f );

		int 	getRawBits( void ) const;

		void 	setRawBits( int const raw );

	private:
		int			_i;
		const int	_n;

};

#endif