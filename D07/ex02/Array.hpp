/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 14:36:00 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/14 19:43:16 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

template< typename T >
class Array
{
	public:
		Array( void ) 
		{
			this->_size = 0;
			this->_tbl = new T[0];
		}
		Array( unsigned int size ) : _size(size), _tbl( new T[size] )
		{
			for (int i = 0; i < this->_size; i++)
			{
				this->_tbl[i] = T();
			}
		}
		Array( Array<T> const &a )
		{
			*this = a;
			return ;
		}
		~Array( void )
		{
			if ( this->_tbl )
				delete [] this->_tbl;
		}

		Array<T> &	operator=( Array<T> const &a )
		{
			if ( this != &a )
			{
				if ( this->_tbl )
					delete [] this->_tbl;

				this->_size = a.size();
				this->_tbl = new T[this->_size];
				for ( int i = 0; i < this->_size; i++ )
				{
					this->_tbl[i] = a[i];
				}
				
			}
			return *this;
		}

		T	& operator[]( unsigned int i ) const
		{
			if ( i > this->_size )
				throw std::out_of_range("You are out of size");
			return this->_tbl[i];
		}

		unsigned int size( void ) const
		{
			return this->_size;
		}

	private:
		unsigned int		_size;
		T					*_tbl;
};
