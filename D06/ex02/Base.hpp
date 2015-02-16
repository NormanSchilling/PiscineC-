/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:58:21 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 17:10:12 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE
# define BASE

# include <iostream>

class Base
{
	public:
		Base( void );
		Base( Base const & src );
		virtual ~Base( void );

		Base &			operator=( Base const & rhs );

		// GETTER

		// SETTER

	private:

};

#endif

