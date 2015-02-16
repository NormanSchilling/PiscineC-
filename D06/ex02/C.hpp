/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:59:23 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 17:51:38 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include "Base.hpp"

class C : public Base
{
	public:
		C( void );
		C( C const & src );
		virtual ~C( void );

		C &			operator=( C const & rhs );

		// GETTER

		// SETTER

	private:

};

#endif

