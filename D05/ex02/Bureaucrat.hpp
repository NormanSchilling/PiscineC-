/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 10:18:51 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:22:42 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

#include "Form.hpp"

class Bureaucrat 
{
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException( void );
				GradeTooHighException( GradeTooHighException const &e);
				virtual ~GradeTooHighException() throw();

				GradeTooHighException & operator=( GradeTooHighException const & b ) throw();

				virtual const char* what() const throw();

		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException( void );
				GradeTooLowException( GradeTooLowException const &e);
				virtual ~GradeTooLowException() throw();

				GradeTooLowException & operator=( GradeTooLowException const & b ) throw();

				virtual const char* what() const throw();

		};

		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const &b);
		~Bureaucrat( void );

		Bureaucrat & operator=( Bureaucrat const & b );

		void 			  executeForm(Form const & form) const;
		void			  signForm( Form &f );
		void			  upGrade( void );
		void			  downGrade( void );

		const std::string getName( void ) const;
		int				  getGrade( void ) const;

	private:
		const std::string	  _name;
		int					  _grade;

};

std::ostream & operator<<( std::ostream &o, Bureaucrat const &b );

#endif