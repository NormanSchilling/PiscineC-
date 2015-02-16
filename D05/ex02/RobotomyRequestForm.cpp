/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:55:28 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:25:38 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

/**
	CONSTRUCTOR
**/
RobotomyRequestForm::RobotomyRequestForm( void ) : Form("RobotomyRequestForm", 72, 45 )
{
	srand(time(0));
	this->_target = "default";

	return ;
}
RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45 )
{
	srand(time(0));
	this->_target = target;

	return ;
}
RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & r ) : Form (r)
{
	*this = r;
	return ;
}

/**
	DESTRUCTOR
**/
RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & r )
{
	Form::operator=( r );
	return *this;
}

/**
	FUNCTIONS
**/
void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	try {
		if (this->getCheckSign() == true && this->getGradeToExecute() >= executor.getGrade( ) ) {
			std::stringstream    outFileName;
		    std::ofstream        outFile;
		    outFileName << this->_target;

		    outFile.open( outFileName.str().c_str() );
		    if ( outFile.is_open() ) {
		    	outFile << "Bip..BipBip... Biiiiiiiip" << std::endl;
			    if ( rand() % 2 == 0) {
			    	outFile << this->_target << " has been robotomized successfully !" << std::endl;
			    } else {
			    	outFile << this->_target << " has failed !" << std::endl;
			    }
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