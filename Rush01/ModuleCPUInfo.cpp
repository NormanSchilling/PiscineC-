/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModuleCPUInfo.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 18:03:46 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/18 18:07:11 by nschilli         ###   ########.fr       */
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

#include "ModuleCPUInfo.hpp"

ModuleCPUInfo::ModuleCPUInfo( void )
{
	return ;
}
ModuleCPUInfo::ModuleCPUInfo( std::string name ) : _name(name), _state(true)
{
	return ;
}
ModuleCPUInfo::ModuleCPUInfo( ModuleCPUInfo const & module )
{
	*this = module;
	return ;
}

ModuleCPUInfo::~ModuleCPUInfo( void )
{

	return ;
}


ModuleCPUInfo & ModuleCPUInfo::operator=(ModuleCPUInfo const & module)
{
	if ( this != &module )
	{
		this->_name = module.getName();
		this->_state = module._state;
	}

	return *this;
}

void			ModuleCPUInfo::getInfo( void )
{
	this->model();
	this->numberCore();
	this->clockSpeed();
	return ;
}

void			ModuleCPUInfo::model( void )
{
	char buf[100];
    size_t buflen = 100;
    sysctlbyname("machdep.cpu.brand_string", &buf, &buflen, NULL, 0);

    this->_model = buf;

	return ;
}
void			ModuleCPUInfo::clockSpeed( void )
{
	char buf[100];
    size_t buflen = 100;
    sysctlbyname("machdep.cpu.brand_string", &buf, &buflen, NULL, 0);
    this->_clockSpeed = "2.9GHz";
	return ;
}
void			ModuleCPUInfo::numberCore( void )
{
    int nm[2];
    size_t len = 8;
    uint32_t count;

    nm[0] = CTL_HW; nm[1] = HW_AVAILCPU;
    sysctl(nm, 2, &count, &len, NULL, 0);

    if(count < 1) {
        nm[1] = HW_NCPU;
        sysctl(nm, 2, &count, &len, NULL, 0);
        if(count < 1) 
        { 
        	count = 1; 
        }
    }
    std::cout << count << std::endl;
    this->_numberCore = static_cast<int>(count);
	return ;
}

std::string		ModuleCPUInfo::getName( void ) const
{
	return this->_name;
}
std::string 	ModuleCPUInfo::getModel( void ) const
{
	return this->_model;
}
std::string		ModuleCPUInfo::getClockSpeed( void ) const
{
	return this->_clockSpeed;
}
int				ModuleCPUInfo::getNumberCore( void ) const
{
	return this->_numberCore;
}

void			ModuleCPUInfo::setState( bool value )
{
	this->_state = value;
}

bool			ModuleCPUInfo::getState( void )
{
	return this->_state;
}

