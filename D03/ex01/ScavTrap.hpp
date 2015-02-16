/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 15:03:50 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 17:23:46 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ScavTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &ft );
		~ScavTrap( void );

		ScavTrap & operator=( ScavTrap const &ft );

		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer( void ) const;

		void	challengeDoctor( void ) const;
		void	challengeMakeMusic( void ) const;
		void	challengeDance( void ) const;
		void	ChallengeMakeSomething( void ) const;
		void	ChallengeWhoiam( void ) const;

		std::string 	getName( void ) const;
		unsigned int	getHitPoints( void ) const ;
		unsigned int 	getMaxHitPoints( void ) const;
		unsigned int 	getEnergyPoints( void ) const;
		unsigned int 	getMaxEnergyPoints( void ) const;
		unsigned int 	getLevel( void ) const;
		unsigned int 	getMeleeAttackDamage( void ) const;
		unsigned int 	getRangedAttackDamage( void ) const;
		unsigned int 	getArmorDamageReduction( void ) const;

	private:
		std::string				_name;
		unsigned int			_hitPoints;
		unsigned int			_maxHitPoints;
		unsigned int			_energyPoints;
		unsigned int			_maxEnergyPoints;
		unsigned int			_level;
		unsigned int			_meleeAttackDamage;
		unsigned int			_rangedAttackDamage;
		unsigned int			_armorDamageReduction;

};
