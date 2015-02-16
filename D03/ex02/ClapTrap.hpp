/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 16:24:59 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 18:48:10 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const &ct );
		~ClapTrap( void );

		ClapTrap & operator=( ClapTrap const &ct );

		std::string 	getName( void ) const;
		unsigned int	getHitPoints( void ) const ;
		unsigned int 	getMaxHitPoints( void ) const;
		unsigned int 	getEnergyPoints( void ) const;
		unsigned int 	getMaxEnergyPoints( void ) const;
		unsigned int 	getLevel( void ) const;
		unsigned int 	getMeleeAttackDamage( void ) const;
		unsigned int 	getRangedAttackDamage( void ) const;
		unsigned int 	getArmorDamageReduction( void ) const;

	protected:
		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void	attackLazer( void ) const;
		void	attackBomb( void ) const;
		void	attackDance( void ) const;
		void	attackCarambarJoke( void ) const;
		void	attackHead( void ) const;

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

#endif