/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 10:17:21 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:10:24 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main( void )
{

	Bureaucrat *b = new Bureaucrat("bob", 2);

	ShrubberyCreationForm *s = new ShrubberyCreationForm("home");
	RobotomyRequestForm *r = new RobotomyRequestForm("ClapTrap");
	PresidentialPardonForm *p = new PresidentialPardonForm("President");

	s->beSigned( *b );
	s->execute( *b );
	r->beSigned( *b );
	r->execute( *b );

	p->execute( *b );
	p->beSigned( *b );
	p->execute( *b );
	return 0;
}