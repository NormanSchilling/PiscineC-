/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 09:35:19 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 14:47:37 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class FragTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const &ft );
		~FragTrap( void );

		FragTrap & operator=( FragTrap const &ft );

		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);

		void	attackLazer( void ) const;
		void	attackBomb( void ) const;
		void	attackDance( void ) const;
		void	attackCarambarJoke( void ) const;
		void	attackHead( void ) const;

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