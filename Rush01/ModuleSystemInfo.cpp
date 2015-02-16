/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModuleSystemInfo.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 14:10:10 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/17 17:51:53 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include <sys/utsname.h>
#include <sys/wait.h>
#include <sys/param.h>
#include <sys/sysctl.h>
#include <unistd.h>
#include <ctime>
#include "ModuleSystemInfo.hpp"

ModuleSystemInfo::ModuleSystemInfo( void )
{
	return ;
}
ModuleSystemInfo::ModuleSystemInfo( std::string name ) : _name(name), _state(true)
{
	return ;
}
ModuleSystemInfo::ModuleSystemInfo( ModuleSystemInfo const & module )
{
	*this = module;
	return ;
}

ModuleSystemInfo::~ModuleSystemInfo( void )
{
	return ;
}


ModuleSystemInfo & ModuleSystemInfo::operator=(ModuleSystemInfo const & module)
{
	if ( this != &module )
	{
		this->_name = module.getName();
		this->_state = module._state;
	}

	return *this;
}

void			ModuleSystemInfo::setState( bool value )
{
	this->_state = value;
}

bool			ModuleSystemInfo::getState( void )
{
	return this->_state;
}


void			ModuleSystemInfo::getInfo( void )
{
	this->hostname();
	this->systemOS();
	this->currentTime();
	return ;
}

void		ModuleSystemInfo::hostname( void )
{
	char hostname[128];
	gethostname( hostname, sizeof hostname);
	this->_hostname = static_cast<std::string>(hostname);
	return ;
}
void		ModuleSystemInfo::systemOS( void )
{
	struct utsname unameData;
	uname(&unameData);
	this->_os = unameData.sysname;
	return ;
}
void		ModuleSystemInfo::currentTime( void )
{
	time_t t = time(0);
	struct tm * now = localtime( & t );
    int year = now->tm_year + 1900;
   	int month = now->tm_mon + 1;
   	int	day = now->tm_mday;

   	this->_time[0] = day;
   	this->_time[1] = month;
   	this->_time[2] = year;
	return ;
}

std::string		ModuleSystemInfo::getHostName(void){return this->_hostname;}
std::string		ModuleSystemInfo::getOs(void){return this->_os;}
int				ModuleSystemInfo::getDay(void){return this->_time[0];}
int				ModuleSystemInfo::getMonth(void){return this->_time[1];}
int				ModuleSystemInfo::getYear(void){return this->_time[2];}

std::string		ModuleSystemInfo::getName( void ) const
{
	return this->_name;
}