/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 10:17:21 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 15:50:59 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

int		main( void )
{
	Bureaucrat *b = new Bureaucrat("bob", 0);
	Bureaucrat *b2 = new Bureaucrat("Lionel", 151);
	Bureaucrat *b3 = new Bureaucrat(*b);
	std::cout << *b << *b2 << *b3;

	Bureaucrat *golum = new Bureaucrat( "Golum", 145 );

	for (int i = 0; i < 10; i++ ) {
		std::cout << *golum;
		golum->downGrade( );
	}

	Bureaucrat *frodon = new Bureaucrat( "Frodon", 8 );
	for (int i = 10; i > 0; i-- ) {
		std::cout << *frodon;
		frodon->upGrade( );
	}
	return 0;
}