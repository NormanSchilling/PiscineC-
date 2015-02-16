/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 15:03:50 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 18:47:31 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &ft );
		~ScavTrap( void );

		ScavTrap & operator=( ScavTrap const &ft );

		void challengeNewcomer( void ) const;

		void	challengeDoctor( void ) const;
		void	challengeMakeMusic( void ) const;
		void	challengeDance( void ) const;
		void	ChallengeMakeSomething( void ) const;
		void	ChallengeWhoiam( void ) const;

};

#endif
