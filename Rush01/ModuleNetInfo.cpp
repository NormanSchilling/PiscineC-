/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModuleNetInfo.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 12:02:09 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/18 18:08:05 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <iostream>
#include <sys/wait.h>
#include <sys/param.h>
#include <sys/sysctl.h>
#include <sys/time.h>
#include <sys/types.h>
#include <mach/vm_statistics.h>
#include <mach/mach_types.h>
#include <mach/mach_init.h>
#include <mach/mach_host.h>
#include <sys/socket.h>
#include <sstream>

#include "ModuleNetInfo.hpp"

ModuleNetInfo::ModuleNetInfo( void )
{
	return ;
}
ModuleNetInfo::ModuleNetInfo( std::string name ) : _name(name), _state(true)
{
	return ;
}
ModuleNetInfo::ModuleNetInfo( ModuleNetInfo const & module )
{
	*this = module;
	return ;
}

ModuleNetInfo::~ModuleNetInfo( void )
{
	return ;
}


ModuleNetInfo & ModuleNetInfo::operator=(ModuleNetInfo const & module)
{
	if ( this != &module )
	{
		this->_name = module.getName();
		this->_state = module._state;
	}

	return *this;
}

void			ModuleNetInfo::getInfo( void )
{


	return ;
}


std::string		ModuleNetInfo::getName( void ) const
{
	return this->_name;
}

void			ModuleNetInfo::setState( bool value )
{
	this->_state = value;
}

bool			ModuleNetInfo::getState( void )
{
	return this->_state;
}

