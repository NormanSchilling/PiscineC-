/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModuleCPUInfo.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 18:03:59 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/18 18:05:50 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULECPUINFO_HPP
#define MODULECPUINFO_HPP

#include <iostream>
#include "IMonitorModule.hpp"

class ModuleCPUInfo : public IMonitorModule
{
	public:
		ModuleCPUInfo( void );
		ModuleCPUInfo( std::string name );
		ModuleCPUInfo( ModuleCPUInfo const & module );
		virtual ~ModuleCPUInfo( void );

		ModuleCPUInfo & operator=( ModuleCPUInfo const & module );

		virtual void		getInfo( void );
		virtual std::string	getName( void ) const;

		void				model( void );
		void				clockSpeed( void );
		void				numberCore( void );

		std::string 	getModel( void ) const;
		std::string		getClockSpeed( void ) const;
		int				getNumberCore( void ) const;


		void				setState( bool value );
		bool           		getState( void );
	private:
		std::string		_name;
		std::string		_model;
		std::string		_clockSpeed;
		int				_numberCore;
		bool			_state;

};

#endif