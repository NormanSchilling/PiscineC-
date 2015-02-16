/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModuleRamInfo.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 21:19:23 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/18 11:38:55 by nschilli         ###   ########.fr       */
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
#include <sstream>

#include "ModuleRamInfo.hpp"

ModuleRamInfo::ModuleRamInfo( void )
{
	return ;
}
ModuleRamInfo::ModuleRamInfo( std::string name ) : _name(name), _state(true)
{
	return ;
}
ModuleRamInfo::ModuleRamInfo( ModuleRamInfo const & module )
{
	*this = module;
	return ;
}

ModuleRamInfo::~ModuleRamInfo( void )
{
	return ;
}


ModuleRamInfo & ModuleRamInfo::operator=(ModuleRamInfo const & module)
{
	if ( this != &module )
	{
		this->_name = module.getName();
		this->_state = module._state;
	}

	return *this;
}

void			ModuleRamInfo::getInfo( void )
{
	this->memory();
	this->totalRAM();
	return ;
}

void			ModuleRamInfo::memory( void )
{
	std::stringstream ss;
	std::stringstream ss2;
	vm_size_t					page_size;
	mach_port_t					mach_port;
	mach_msg_type_number_t		count;
	vm_statistics64_data_t		vm_stats;

	mach_port = mach_host_self();
	count = sizeof(vm_stats) / sizeof(natural_t);

	if ( KERN_SUCCESS == host_page_size( mach_port, &page_size ) &&
		KERN_SUCCESS == host_statistics64( mach_port, HOST_VM_INFO, reinterpret_cast<host_info64_t>( &vm_stats ), &count ) )
	{
		long long free_memory = static_cast<int64_t>( vm_stats.free_count ) * static_cast<int64_t>( page_size );

		long long used_memory = ( static_cast<int64_t>( vm_stats.active_count ) + static_cast<int64_t>( vm_stats.inactive_count ) + static_cast<int64_t>( vm_stats.wire_count ) ) * static_cast<int64_t>( page_size );
		ss << static_cast<float>((free_memory / 1024.0 / 1024.0));
		ss2 << static_cast<float>((used_memory / 1024.0) / 1024.0);
	
		this->_memory[0] = ss.str();
		this->_memory[1] = ss2.str();
	}

	return ;
}
void			ModuleRamInfo::totalRAM( void )
{
	int mib[2];
	mib[0] = CTL_HW ;
	mib[1] = HW_MEMSIZE;
	int64_t value = 0;
	size_t length = sizeof(value);

	sysctl(mib, 2, &value, &length, NULL, 0);

	this->_totalRAM = (((value / 1024) / 1024)/1024);

	return ;
}

std::string		ModuleRamInfo::getName( void ) const
{
	return this->_name;
}
int				ModuleRamInfo::getTotalRAM( void ) const
{
	return this->_totalRAM;
}
std::string				ModuleRamInfo::getFreeMemory( void ) const
{
	return this->_memory[0];
}
std::string				ModuleRamInfo::getUsedMemory( void ) const
{
	return this->_memory[1];
}

void			ModuleRamInfo::setState( bool value )
{
	this->_state = value;
}

bool			ModuleRamInfo::getState( void )
{
	return this->_state;
}

