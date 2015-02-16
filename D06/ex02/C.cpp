/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:59:23 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 17:51:07 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Base.hpp"
# include "C.hpp"

C::C() : Base()
{ 
	return ;
}

C::C( C const & src ) : Base()
{
	*this= src;
}

C::~C( void )
{
	return ;
}

C &	C::operator=( C const & rhs )
{
	(void)rhs;
	return ( *this );
}
