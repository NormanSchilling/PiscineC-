/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModuleNetInfo.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 12:02:19 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/18 12:03:42 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULENETINFO_HPP
#define MODULENETINFO_HPP

#include <iostream>
#include <sstream>
#include "IMonitorModule.hpp"

class ModuleNetInfo : public IMonitorModule
{
	public:
		ModuleNetInfo( void );
		ModuleNetInfo( std::string name );
		ModuleNetInfo( ModuleNetInfo const & module );
		virtual ~ModuleNetInfo( void );

		ModuleNetInfo & operator=( ModuleNetInfo const & module );

		virtual void		getInfo( void );
		virtual std::string	getName( void ) const;


		void				setState( bool value );
		bool           		getState( void );
	private:
		std::string			_name;
		
		bool				_state;

};

#endif