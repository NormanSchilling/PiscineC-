/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 11:53:17 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/15 16:00:14 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
	public:
		static	unsigned int index;
		Span( unsigned int size );
		Span( Span const & s );
		~Span( void );

		Span & operator=( Span const & s );

		void	addNumber( unsigned int i );

		int		shortestSpan( void );
		int		longestSpan( void );

		unsigned int getSize( void ) const;
	private:
		Span( void );
		unsigned int 		_size;
		std::vector<int>		_span;
};

#endif