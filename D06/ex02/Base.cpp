/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:58:21 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 17:52:36 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Base.hpp"

Base::Base( void )
{
	return ;
}

Base::Base( Base const & src )
{
	*this= src;
}

Base::~Base( void )
{
	return ;
}

Base &	Base::operator=( Base const & rhs )
{
	(void)rhs;
	return ( *this );
}