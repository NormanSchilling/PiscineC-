/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 11:44:52 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/14 14:41:24 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename Titer, typename Num, typename Func >
void  iter(Titer *a, Num length, Func f )
{
	for ( Num i = 0; i < length; i++ )
	{
		f(a[i]);
	}
}

template< typename T >
void	display( T i ) 
{
	std::cout << i << std::endl;
}

int main( void )
{

	int i[5];

	i[0] = 0;
	i[1] = 10;
	i[2] = 40;
	i[3] = -10;
	i[4] = 25;

	::iter( i, (sizeof(i) / sizeof(0)), display< int > );

	std::cout << std::endl;
	std::string str[5];

	str[0] = "lol";
	str[1] = "Write a function";
	str[2] = "template iter that take 3 parameters and returns nothing.";
	str[3] = "The first parameter is the address of an array";
	str[4] = "45862666";

	::iter(str, (sizeof(str) / sizeof(str[0])), display< std::string > );

	std::cout << std::endl;
	float f[5];

	f[0] = 15;
	f[1] = 16.5;
	f[2] = 30.456;
	f[3] = 150.981215;
	f[4] = 200000.554;

	::iter(f, (sizeof(f) / sizeof(f[0])), display< float > );

	std::cout << std::endl;
	double d[5];

	d[0] = 15;
	d[1] = 16.5;
	d[2] = 30.456;
	d[3] = 150.981215;
	d[4] = 200000.554;

	::iter(d, (sizeof(d) / sizeof(d[0])), display< double > );
	return 0;
}

