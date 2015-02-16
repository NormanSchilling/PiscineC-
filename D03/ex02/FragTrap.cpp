/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 09:34:56 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 18:46:40 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"


/**
	CONSTRUCTOR
**/
FragTrap::FragTrap( void )
{
	this->_name = "Claptrap";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << "Allow me to introduce myself - " << " I'm " << this->_name << " and i'm alive !" << std::endl;

	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << "Allow me to introduce myself - " << " I'm " << this->_name << " and i'm alive !" << std::endl;

	return ;
}

FragTrap::FragTrap( FragTrap const &ft ) : ClapTrap( ft )
{
	std::cout << "Allow me to introduce myself - " << " I'm " << this->_name << " and i'm alive !" << std::endl;
	return ;
}
/**
	DESTRUCTOR
**/
FragTrap::~FragTrap( void )
{
	std::cout << "AAAAAAAAAHHHH ! I'm " << this->_name << " and i'm dead ! " << std::endl;
	return ;
}


/**
	ASSIGN OPERATOR
**/
FragTrap &FragTrap::operator=(FragTrap const &ft)
{
	ClapTrap::operator=( ft );

    return *this;
}

/**
	FUNCTIONS
**/
void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int random = rand() % 2;

	if ( this->_energyPoints == 0 ) {
		std::cout << "Sorry Bro, I'm out of energy ! " << std::endl;
	} else {
		this->_energyPoints = this->_energyPoints - 25;
		if ( random == 0 )
			meleeAttack( target );
		else if ( random == 1 )
			rangedAttack( target );
	}

}


