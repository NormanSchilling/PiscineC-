/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:55:39 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/12 19:25:17 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat;
class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & r );
		virtual ~RobotomyRequestForm( void );

		RobotomyRequestForm & operator=( RobotomyRequestForm const & r );

		virtual void	execute( Bureaucrat const & executor ) const;

	private:
		std::string _target;
};

#endif