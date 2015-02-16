/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModuleSystemInfo.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 14:12:39 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/17 16:16:19 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULESYSTEMINFO_HPP
#define MODULESYSTEMINFO_HPP

#include <iostream>
#include "IMonitorModule.hpp"

class ModuleSystemInfo : public IMonitorModule
{
	public:
		ModuleSystemInfo(void);
		ModuleSystemInfo(std::string name);
		ModuleSystemInfo(ModuleSystemInfo const & module);
		virtual ~ModuleSystemInfo(void);

		ModuleSystemInfo & operator=(ModuleSystemInfo const & module);

		virtual void		getInfo(void);
		virtual std::string	getName(void) const;
		void				hostname(void);
		void				systemOS(void);
		void				currentTime(void);

		std::string		getHostName(void);
		std::string		getOs(void);
		int				getDay(void);
		int				getMonth(void);
		int				getYear(void);
		void			setState( bool value );
		bool            getState( void );

	private:
		std::string		_name;
		bool			_state;
		std::string		_hostname;
		std::string		_os;
		int				_time[3];


};

#endif