/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 11:53:11 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/15 15:59:35 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <algorithm>

unsigned int	Span::index = 0;

Span::Span( unsigned int size ) : _size(size)
{
	return ;
}
Span::Span( Span const & s )
{
	*this = s;
	return ;
}
Span::~Span( void )
{
	return ;
}

Span & Span::operator=( Span const & s )
{
	if ( this != &s )
	{
		this->_size = s.getSize();
	}
	return *this;
}

void	Span::addNumber( unsigned int i )
{
	if ( Span::index < this->_size ) {
		this->_span.push_back(i);
		Span::index++;
	}
	return ;
}

int	Span::shortestSpan( void )
{
	if (this->_size <= 1)
		throw std::exception();

	std::sort ( this->_span.begin(), this->_span.end() ); 
	int diff = std::abs(this->_span[0] - this->_span[1]);
	for (unsigned int i = 0; i < this->_size ; i++)
	{
		if ( diff > std::abs (this->_span[i] - this->_span[i+1]) )
			diff = std::abs (this->_span[i] - this->_span[i+1]);
	}
	return diff;
}

int	Span::longestSpan( void )
{
	if (this->_size <= 1)
		throw std::exception();
	int min = *std::min_element( this->_span.begin(), this->_span.end() );
	int max = *std::max_element( this->_span.begin(), this->_span.end() );
	return max - min;
}

unsigned int Span::getSize( void ) const
{
	return this->_size;
}