#ifndef SHELLDISPLAY_H
# define SHELLDISPLAY_H

#include <iostream>
#include <ncurses.h>
#include <list>
#include "IMonitorDisplay.hpp"

#include "ModuleSystemInfo.hpp"
#include "ModuleCPUInfo.hpp"
#include "ModuleRamInfo.hpp"
#include "ModuleNetInfo.hpp"

class ShellDisplay : public IMonitorDisplay
{

	public:
		ShellDisplay(void);
		ShellDisplay(ShellDisplay const &);
		ShellDisplay & operator=(ShellDisplay const &);
		~ShellDisplay( void );

		void keyPressed( int );
		void render( void );

		void setModule( ModuleSystemInfo & );
		void setModule( ModuleCPUInfo & );
		void setModule( ModuleRamInfo & );

		virtual void	displayData( void );
		void			displaySystemInfo(int x);
		void			displayCPUInfo(int x);
		void			displayRamInfo(int x);
	private:
		ModuleSystemInfo *	_systemInfo;
		ModuleCPUInfo *		_CPUInfo;
		ModuleRamInfo *		_RamInfo;
		

	
};


#endif