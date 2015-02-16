/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 11:09:29 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/18 19:23:20 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "ShellDisplay.hpp"

int main(void)
{
	unsigned	startTime;
	unsigned	endTime;
	int 		ch;
	ModuleSystemInfo *sys = new ModuleSystemInfo("System Information");
	ModuleCPUInfo    *cpu = new ModuleCPUInfo("CPU");
	ModuleRamInfo    *ram = new ModuleRamInfo("RAM");
	ModuleNetInfo    *net = new ModuleNetInfo("NET");
	ShellDisplay *display = new ShellDisplay();

	ram->getInfo();
	cpu->getInfo();
	net->getInfo();
	display->setModule(*sys);	
	display->setModule(*cpu);
	display->setModule(*ram);	

	while((ch = getch()) != 27)
	{
		startTime = time( NULL );
		clear();
		display->keyPressed(ch);
		display->render();
		refresh();
		endTime = time( NULL );
		usleep( ( 1000000 / 60 ) - ( endTime - startTime ));
	}
	delete display;
	delete sys;
	delete cpu;
	delete ram;
	delete net;

    return 0;
}

