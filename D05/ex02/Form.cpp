/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:46:31 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:24:27 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <stdexcept>

/**
	CONSTRUCTOR
**/
Form::Form( void ) : _name("default"), _gradeToSign(100), _gradeToExecute(50)
{
	this->_checkSign = false;
}

Form::Form( std::string name, int gradeToSign, int gradeToExecute ) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	try {
		if ( this->_gradeToSign < 1 ) {
			throw Form::GradeTooHighException( );
		} else if ( this->_gradeToSign > 150) {
			throw Form::GradeTooLowException( );
		} else {
			this->_checkSign = false;
		}
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	return ;
}

Form::Form( Form const &b ) : _name( b.getName( ) ), _gradeToSign( b.getGradeToSign( ) ), _gradeToExecute( b.getGradeToExecute( ) )
{
	*this = b;
	return ;
}

Form::GradeTooHighException::GradeTooHighException( void ) : exception()
{
	return ;
}
Form::GradeTooHighException::GradeTooHighException( GradeTooHighException const &e ) : exception()
{
	*this = e;
	return ;
}

Form::GradeTooLowException::GradeTooLowException( void ) : exception()
{
	return ;
}
Form::GradeTooLowException::GradeTooLowException( GradeTooLowException const &e) : exception()
{
	*this = e;
	return ;
}

/**
	DESTRUCTOR
**/
Form::~Form( void )
{
	return ;
}
Form::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}
Form::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
Form & Form::operator=( Form const & b )
{
	if ( this != &b ) {
		this->_checkSign = b.getCheckSign( );
	}
	return *this;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=( GradeTooHighException const & b ) throw()
{
	(void)b;
	return *this;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=( GradeTooLowException const & b ) throw()
{
	(void)b;
	return *this;
}

std::ostream & operator<<( std::ostream &o, Form const &f )
{
	o << f.getName( ) << " => grade to sign : " << f.getGradeToSign( ) << ", grade to execute : " << f.getGradeToExecute( ) << std::endl;

	return o;
}

/**
	FUNCTIONS
**/
void		Form::beSigned( Bureaucrat &b )
{
	try {
		if ( this->_gradeToSign < b.getGrade() ) {
			this->_checkSign = false;
			b.signForm( *this );
			throw Form::GradeTooLowException( );

		} else {
			this->_checkSign = true;
			b.signForm( *this );
		}
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	return ;
}
void		Form::execute( void ) const {}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too higher");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

/**
	GETTER
**/
const std::string 		Form::getName( void ) const
{
	return this->_name;
}
int						Form::getGradeToSign( void ) const
{
	return this->_gradeToSign;
}
int						Form::getGradeToExecute( void ) const
{
	return this->_gradeToExecute;
}
bool			  		Form::getCheckSign( void ) const
{
	return this->_checkSign;
}