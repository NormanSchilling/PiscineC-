/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 09:38:55 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 18:28:39 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "Convert.hpp"
#include "ExceptionParamsMain.hpp"

int main( int argc, char **argv )
{
	try {
		if ( argc == 2 ) {
			Convert *convert = new Convert( argv[1] );

			convert->displayConvert( );

			delete convert;
		} else if ( argc < 2 ) {
			throw ExceptionParamsMain( argc, 2, 2 );
		} else if ( argc > 2 ) {
			throw ExceptionParamsMain( argc, 2, 2);
		}
	} catch ( ExceptionParamsMain & e ) {
		e.errorBoard();
	}
 
	return 0;
}