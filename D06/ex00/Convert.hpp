/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 09:40:41 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 18:28:12 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert
{
	public:
		Convert( void );
		Convert( char * str );
		Convert( Convert const & convert );
		~Convert( void );

		Convert 		&operator=( Convert const & convert );

		void			displayConvert( void );
		void			parser( void );
		char			*getStr( void ) const;

	protected:
		char 			*_str;
		char			_c;
		int				_i;
		float			_f;
		double			_d;

};

#endif