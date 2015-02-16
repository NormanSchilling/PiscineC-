/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 10:19:06 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:24:01 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>

/**
	CONSTRUCTOR
**/
Bureaucrat::Bureaucrat( void ) : _name("default")
{
	this->_grade = 1;
}
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	try {
		if ( grade < 1 ) {
			this->_grade = 1;
			throw Bureaucrat::GradeTooHighException( );
		} else if ( grade > 150) {
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException( );
		} else {
			this->_grade = grade;
		}
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &b ) : _name( b.getName( ) )
{
	*this = b;
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException( void ) : exception()
{
	return ;
}
Bureaucrat::GradeTooHighException::GradeTooHighException( GradeTooHighException const &e ) : exception()
{
	*this = e;
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( void ) : exception()
{
	return ;
}
Bureaucrat::GradeTooLowException::GradeTooLowException( GradeTooLowException const &e) : exception()
{
	*this = e;
	return ;
}

/**
	DESTRUCTOR
**/
Bureaucrat::~Bureaucrat( void )
{
	return ;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

/**
	ASSIGN OPERATOR
**/
void 			  Bureaucrat::executeForm(Form const & form) const
{
	std::cout << this->_name << " execute " <<  form.getName() << std::endl;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & b )
{
	if ( this != &b ) {
		this->_grade = b.getGrade( );
	}
	return *this;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=( GradeTooHighException const & b ) throw()
{
	(void)b;
	return *this;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=( GradeTooLowException const & b ) throw()
{
	(void)b;
	return *this;
}

std::ostream & operator<<( std::ostream &o, Bureaucrat const &b )
{
	o << b.getName( ) << ", bureaucrat grade " << b.getGrade( ) << std::endl;

	return o;
}

/**
	FUNCTIONS
**/
void			  Bureaucrat::signForm( Form &f )
{
	if ( f.getCheckSign( ) == true ) {
		std::cout << this->_name << " signs " << f.getName() << std::endl;
	} else {
		std::cout << this->_name << " cannot sign " << f.getName() << " because the minimum grade to sign is "<< f.getGradeToSign() << std::endl;
	}
	

	return ;
}
void		      Bureaucrat::upGrade( void )
{
	try {
		if ( this->_grade <= 1 )
			throw Bureaucrat::GradeTooHighException( );
		else if ( this->_grade >= 150)
			throw Bureaucrat::GradeTooLowException( );
		else
			this->_grade--;
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

}
void			 Bureaucrat::downGrade( void )
{
	try {
		if ( this->_grade <= 1 )
			throw Bureaucrat::GradeTooHighException( );
		else if ( this->_grade >= 150)
			throw Bureaucrat::GradeTooLowException( );
		else
			this->_grade++;
	} catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

/**
	GETTER
**/
const std::string Bureaucrat::getName( void ) const
{
	return this->_name;
}
int			Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}