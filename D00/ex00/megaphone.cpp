/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 12:32:02 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/05 12:44:48 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

char*		ft_toupper( char *str )
{
	int		i;

	i = 0;
	while ( str[i] != '\0' ) {
		if ( str[i] >= 97 && str[i] <= 122 )
			str[i] = str[i] - 32;
		i++;
	}

	return ( str );
}

int		main( int argc, char **argv )
{
	int		i;

	if ( argc <= 1 )
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if ( argc > 1) {
		i = 1;
		while ( i < argc ) {
			std::cout << ft_toupper(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}

	return 0;
}