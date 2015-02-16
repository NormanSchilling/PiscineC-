/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:46:42 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:24:16 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form
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

		Form( void );
		Form( std::string name, int gradeToSign, int gradeToExecute );
		Form( Form const &f );
		virtual ~Form( void );

		Form & operator=( Form const & f );

		void					beSigned( Bureaucrat &b );
		virtual void			execute( void ) const;

		const std::string 		getName( void ) const;
		int						getGradeToSign( void ) const;
		int						getGradeToExecute( void ) const;
		bool			  		getCheckSign( void ) const;


	private:
		const   std::string _name;
		const	int 	  _gradeToSign;
		const   int		  _gradeToExecute;
		bool			  _checkSign;

};

std::ostream & operator<<( std::ostream &o, Form const &f );

#endif
