/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:59:19 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 17:50:59 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Base.hpp"
# include "A.hpp"

A::A() : Base()
{
	return ;
}

A::A( A const & src ) : Base()
{
	*this= src;
}

A::~A( void )
{
	return ;
}

A &	A::operator=( A const & rhs )
{
	(void)rhs;
	return ( *this );
}
