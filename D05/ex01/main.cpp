/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 10:17:21 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 16:52:17 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

int		main( void )
{
	Bureaucrat *b = new Bureaucrat("bob", 140);
	Bureaucrat *b2 = new Bureaucrat("alex", 60);
	Form *f = new Form("FORM452", 75, 25);

	f->beSigned( *b );
	f->beSigned( *b2 );
	return 0;
}