/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:38:48 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 18:35:15 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human 
{
	public:
		Human( void );
		~Human( void );

		std::string identify( void ) const ;

		const Brain &getBrain( void ) const;

	private:
		const Brain 	*_b;

};

#endif