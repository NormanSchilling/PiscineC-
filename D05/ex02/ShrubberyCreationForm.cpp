/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:54:37 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:26:09 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

/**
	CONSTRUCTOR
**/
ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("ShrubberyCreationForm", 145, 137 )
{
	this->_target = "default";

	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137 )
{
	this->_target = target;

	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & s ) : Form (s)
{
	*this = s;
	return ;
}

/**
	DESTRUCTOR
**/
ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & s )
{
	Form::operator=( s );
	return *this;
}

/**
	FUNCTIONS
**/
void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	try {
		if (this->getCheckSign() == true && this->getGradeToExecute() >= executor.getGrade( ) ) {
			std::stringstream    outFileName;
		    std::ofstream        outFile;
		    outFileName << this->_target << "_shrubbery";

		    outFile.open( outFileName.str().c_str() );
		    if ( outFile.is_open() )
		    {
		        outFile <<
		        "          &&& &&  & &&" << std::endl <<
		        "      && &\\/&\\|& ()|/ @, &&" << std::endl <<
		        "      &\\/(/&/&||/& /_/)_&/_&" << std::endl <<
		        "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl <<
		        "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl <<
		        "&&   && & &| &| /& & % ()& /&&" << std::endl <<
		        " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl <<
		        "     &&     \\|||" << std::endl <<
		        "             |||" << std::endl <<
		        "             |||" << std::endl <<
		        "             |||" << std::endl <<
		        "       , -=-~  .-^- _" 
		        << std::endl;
		        outFile.close();
		    }
		    executor.executeForm( *this );
		} else {
				throw  std::string("ERREUR : you can't execute this form !");
		}
	} catch ( std::string const &chaine ) {
		std::cout << chaine << std::endl;
	} 
}
/**
	GETTER
**/