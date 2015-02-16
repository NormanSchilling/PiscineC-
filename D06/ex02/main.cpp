/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 16:02:01 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 18:13:44 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

void identify_from_reference( Base & p )
{
	try 
	{
		A& b = dynamic_cast<A &>(p);
		std::cout << 'A' << std::endl;
	} 
	catch(std::exception & e) 
	{
	}

	try 
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
	} 
	catch(std::exception & e) 
	{
	}

	try {
		C& c = dynamic_cast<C &>(p);
		std::cout << 'C' << std::endl;
	} catch(std::exception  & e) {
	}
	return ;
}

void identify_from_pointer( Base * p )
{
	A * a = dynamic_cast<A *>(p);
	if ( a != NULL ) 
	{
	 	std::cout << 'A' << std::endl;
	}
	B * b = dynamic_cast<B *>(p);
	if ( b != NULL ) 
	{
	 	std::cout << 'B' << std::endl;
	}

	C * c = dynamic_cast<C *>(p);
	if ( c != NULL ) 
	{
	 	std::cout << 'C' << std::endl;
	}

	return ;
}

Base * generate(void)
{
	int random = rand() % 3;
	if ( random == 0 ) 
	{
		A *base = new A();
		return base;
	} 
	else if ( random == 1 ) 
	{
		B *base = new B();
		return base;
	} 
	else
	{
		C *base = new C();
		return base;
	}
}

int main( void )
{

	srand(time(0));
	Base *base = generate();

	identify_from_pointer( base );
	identify_from_reference( *base );
	return 0;
}