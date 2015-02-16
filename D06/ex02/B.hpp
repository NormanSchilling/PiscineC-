/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:59:21 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 17:51:13 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class B : public Base
{
	public:
		B( void );
		B( B const & src );
		virtual ~B( void );

		B &			operator=( B const & rhs );

		// GETTER

		// SETTER

	private:

};

#endif

