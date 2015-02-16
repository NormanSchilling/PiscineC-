/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 11:52:41 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/15 16:01:54 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main( void )
{
	Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try {
	    Span sp2 = Span(3);
	    sp2.addNumber(5);
	    sp2.addNumber(3);
	    sp2.addNumber(17);
	    sp2.addNumber(9);
	    sp2.addNumber(11);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    Span sp3 = Span(10000);
    for (int i = 0; i < 10000; i++)
        sp3.addNumber(i);
    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;

    Span sp4 = Span(1);
    sp4.addNumber(5);
    try{
        std::cout << sp4.shortestSpan() << std::endl;
        std::cout << sp4.longestSpan() << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}