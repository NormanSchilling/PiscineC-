/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:11:04 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/15 17:13:44 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
# include "MutantStack.hpp"

template< typename T>
MutantStack<T>::MutantStack() : stack()
{
	return ;
}

// template< typename T>
// MutantStack::MutantStack( MutantStack const & src ) : stack()
// {
// 	*this= src;
// }

template< typename T>
MutantStack<T>::~MutantStack( void )
{
	return ;
}

// MutantStack &	MutantStack::operator=( MutantStack const & rhs )
// {
// 	if ( this != &rhs )
// 	{

// 	}
// 	return ( *this );
// }
