/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:59:21 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 17:51:03 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
# include "Base.hpp"
# include "B.hpp"

B::B() : Base()
{
	return ;
}

B::B( B const & src ) : Base()
{
	*this= src;
}

B::~B( void )
{
	return ;
}

B &	B::operator=( B const & rhs )
{
	(void)rhs;
	return ( *this );
}
