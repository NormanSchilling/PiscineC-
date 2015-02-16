/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModuleRamInfo.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 21:19:37 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/17 21:28:33 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULERAMINFO_HPP
#define MODULERAMINFO_HPP

#include <iostream>
#include <sstream>
#include "IMonitorModule.hpp"

class ModuleRamInfo : public IMonitorModule
{
	public:
		ModuleRamInfo( void );
		ModuleRamInfo( std::string name );
		ModuleRamInfo( ModuleRamInfo const & module );
		virtual ~ModuleRamInfo( void );

		ModuleRamInfo & operator=( ModuleRamInfo const & module );

		virtual void		getInfo( void );
		virtual std::string	getName( void ) const;

		void				memory( void );
		void				totalRAM( void );

		int					getTotalRAM( void ) const;
		std::string			getFreeMemory( void ) const;
		std::string			getUsedMemory( void ) const;

		void				setState( bool value );
		bool           		getState( void );
	private:
		std::string			_name;
		int					_totalRAM;
		std::string			_memory[2];
		bool				_state;

};

#endif