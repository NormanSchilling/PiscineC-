/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:59:19 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 17:51:10 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
# include <iostream>
# include "Base.hpp"

class A : public Base
{
	public:
		A( void );
		A( A const & src );
		virtual ~A( void );

		A &			operator=( A const & rhs );

		// GETTER

		// SETTER

	private:

};

#endif

