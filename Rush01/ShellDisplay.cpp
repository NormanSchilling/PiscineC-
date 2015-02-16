#include "ShellDisplay.hpp"


ShellDisplay::ShellDisplay(void)
{
	initscr();
	nodelay(stdscr, true);
	keypad(stdscr, true);
	noecho();
	curs_set(0);
	start_color();
	cbreak();
    return ;
}

ShellDisplay::ShellDisplay(ShellDisplay const &src)
{
    *this = src;
    return ;
}

ShellDisplay& ShellDisplay::operator=(ShellDisplay const &rhs)
{
    if ( this != &rhs )
    {
        this->_systemInfo = rhs._systemInfo;
    }
    return *this;
}

ShellDisplay::~ShellDisplay(void)
{
	endwin();
    return ;
}

void	ShellDisplay::keyPressed( int ch )
{
	if (ch == ' ')
	{

	}
	if (ch == 49)
	{
		if (this->_systemInfo->getState())
			this->_systemInfo->setState(false);
		else
			this->_systemInfo->setState(true);
	}
	else if (ch == 50)
	{
		if (this->_CPUInfo->getState())
			this->_CPUInfo->setState(false);
		else
			this->_CPUInfo->setState(true);
	}
	else if (ch == 51)
	{
		if (this->_RamInfo->getState())
			this->_RamInfo->setState(false);
		else
			this->_RamInfo->setState(true);
	}
	// mvprintw(1, 1, "coucou %d", ch);
	return ;
}

void	ShellDisplay::render( void )
{
	this->displayData();
	this->displaySystemInfo(0);
	this->displayCPUInfo(25);
	this->displayRamInfo(50);
	return ;
}

void	ShellDisplay::setModule( ModuleSystemInfo & module)
{
	this->_systemInfo = &module;
}

void	ShellDisplay::setModule( ModuleCPUInfo & module)
{
	this->_CPUInfo = &module;
}

void	ShellDisplay::setModule( ModuleRamInfo & module)
{
	this->_RamInfo = &module;
}

void 	ShellDisplay::displayData( void )
{
 	init_pair(1, COLOR_BLACK, COLOR_RED);
	init_pair(2, COLOR_BLACK, COLOR_GREEN);
	if (this->_systemInfo->getState())
	{
		attron(COLOR_PAIR(2));
		mvprintw(0, 0, "%s on   ", this->_systemInfo->getName().c_str());
		attroff(COLOR_PAIR(2));
	}
	else
	{
		attron(COLOR_PAIR(1));
		mvprintw(0, 0, "%s off  ", this->_systemInfo->getName().c_str());
		attroff(COLOR_PAIR(1));
	}

	if (this->_CPUInfo->getState())
	{
		attron(COLOR_PAIR(2));
		mvprintw(0, 25, "%s on                  ", this->_CPUInfo->getName().c_str());
		attroff(COLOR_PAIR(2));
	}
	else
	{
		attron(COLOR_PAIR(1));
		mvprintw(0, 25, "%s off                 ", this->_CPUInfo->getName().c_str());
		attroff(COLOR_PAIR(1));
	}
	if (this->_RamInfo->getState())
	{
		attron(COLOR_PAIR(2));
		mvprintw(0, 50, "%s on                  ", this->_RamInfo->getName().c_str());
		attroff(COLOR_PAIR(2));
	}
	else
	{
		attron(COLOR_PAIR(1));
		mvprintw(0, 50, "%s off                 ", this->_RamInfo->getName().c_str());
		attroff(COLOR_PAIR(1));
	}
	return ;
}

void	ShellDisplay::displaySystemInfo(int x)
{
	if(this->_systemInfo->getState())
	{
		this->_systemInfo->getInfo();
		mvprintw(1, x, "------------------------");
		mvprintw(2, x, "Hostname: %s", this->_systemInfo->getHostName().c_str());
		mvprintw(3, x, "Os: %s", this->_systemInfo->getOs().c_str());
		mvprintw(4, x, "date: %d/%d/%d", this->_systemInfo->getDay(), this->_systemInfo->getMonth(),this->_systemInfo->getYear());
	}
}

void	ShellDisplay::displayCPUInfo(int x)
{
	if(this->_CPUInfo->getState())
	{
		this->_CPUInfo->getInfo();
		mvprintw(1, x, "------------------------");
		mvprintw(2, x, "Model: %s", this->_CPUInfo->getModel().c_str());
		mvprintw(3, x, "Clock speed: %s", this->_CPUInfo->getClockSpeed().c_str());
		mvprintw(4, x, "Core number: %d", this->_CPUInfo->getNumberCore());
	}
}

void	ShellDisplay::displayRamInfo(int x)
{
	if(this->_RamInfo->getState())
	{
		this->_RamInfo->getInfo();
		mvprintw(1, x, "------------------------");
		mvprintw(2, x, "Free memory: %s Mo",this->_RamInfo->getFreeMemory().c_str());
		mvprintw(3, x, "Used memory: %s Mo", this->_RamInfo->getUsedMemory().c_str());
		mvprintw(4, x, "Total memory: %d Go", this->_RamInfo->getTotalRAM());
	}
}










