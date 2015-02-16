#ifndef IMONITORDISLAY_H
#define IMONITORDISLAY_H

#include "ModuleSystemInfo.hpp"
#include "ModuleCPUInfo.hpp"
#include "ModuleRamInfo.hpp"

class IMonitorDisplay
{
	public:
		virtual ~IMonitorDisplay( void ){}
		virtual void	displayData( void ) = 0;
		virtual void    setModule( ModuleSystemInfo & ) = 0;
		virtual	void	setModule( ModuleCPUInfo & ) = 0;
		virtual	void	setModule( ModuleRamInfo & ) = 0;
    
};

#endif