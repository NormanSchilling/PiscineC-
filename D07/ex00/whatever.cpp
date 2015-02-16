/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 10:42:37 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/14 14:55:20 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename TSwap >
void	swap( TSwap & x, TSwap & y) 
{
	TSwap tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template< typename TMax >
TMax	max( TMax & x, TMax & y) 
{
	if ( x == y)
		return (y);
	return ( x > y ? x : y );
}

template< typename TMin >
TMin	min( TMin & x, TMin & y) 
{
	if ( x == y)
		return (y);
	return ( x > y ? y : x );
}


int		main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}