/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExceptionParamsMain.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 12:01:24 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 18:42:56 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONPARAMSMAIN_HPP
#define EXCEPTIONPARAMSMAIN_HPP

#include <iostream>
#include <stdexcept>

class ExceptionParamsMain : public std::exception
{
	public:
		ExceptionParamsMain( void );
		ExceptionParamsMain( int argc, int min, int max );
		ExceptionParamsMain( ExceptionParamsMain const & exceptionParamsMain );
		virtual ~ExceptionParamsMain( void ) throw();

		ExceptionParamsMain & operator=( ExceptionParamsMain const & exceptionParamsMain ) throw();


		void 				errorBoard( void ) const throw();
		virtual const char* tooMuch() const throw();
		virtual const char* notEnough() const throw();

		int		getARGC( void );
		int		getMin( void );
		int		getMax( void );

	private:
		int		_argc;
		int		_min;
		int		_max;
};

#endif
