/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 11:42:02 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/17 17:51:11 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <iostream>
class IMonitorModule
{
	public:
		virtual ~IMonitorModule( void ){}

		virtual void		getInfo(void) = 0;
		virtual std::string getName(void) const = 0;
};

#endif