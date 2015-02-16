/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:56:19 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:23:43 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

/**
	CONSTRUCTOR
**/
PresidentialPardonForm::PresidentialPardonForm( void ) : Form("PresidentialPardonForm", 25, 5 )
{
	this->_target = "default";

	return ;
}
PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5 )
{
	this->_target = target;

	return ;
}
PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & r ) : Form (r)
{
	*this = r;
	return ;
}

/**
	DESTRUCTOR
**/
PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & r )
{
	Form::operator=( r );
	return *this;
}

/**
	FUNCTIONS
**/
void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	try {
		if (this->getCheckSign() == true && this->getGradeToExecute() >= executor.getGrade( ) ) {
			std::stringstream    outFileName;
		    std::ofstream        outFile;
		    outFileName << this->_target;

		    outFile.open( outFileName.str().c_str() );
		    if ( outFile.is_open() ) {
		    	outFile << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
			}
			outFile.close();
			executor.executeForm( *this );
		} else {
			throw  std::string("ERREUR : you can't execute this form !");
		}
	} catch ( std::string const &chaine ) {
		std::cout << chaine << std::endl;
	}
}