/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:56:29 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:23:54 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat;
class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & r );
		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm & operator=( PresidentialPardonForm const & r );

		virtual void	execute( Bureaucrat const & executor ) const;

	private:
		std::string _target;
};

#endif