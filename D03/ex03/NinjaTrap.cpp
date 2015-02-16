/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 19:04:00 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 20:19:54 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/**
	CONSTRUCTOR
**/
NinjaTrap::NinjaTrap( void )
{
	this->_name = "Claptrap";
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;

	std::cout << "i'm Ninja - " << " I'm " << this->_name << " and i'm alive !" << std::endl;

	return ;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap(name)
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

NinjaTrap::NinjaTrap( NinjaTrap const &ft ) : ClapTrap( ft )
{
	std::cout << "Allow me to introduce myself - " << " I'm " << this->_name << " and i'm alive !" << std::endl;
	return ;
}
/**
	DESTRUCTOR
**/
NinjaTrap::~NinjaTrap( void )
{
	std::cout << "You are see the ninja " << this->_name << " and he is dead ! " << std::endl;
	return ;
}


/**
	ASSIGN OPERATOR
**/
NinjaTrap &NinjaTrap::operator=(NinjaTrap const &ft)
{
	ClapTrap::operator=( ft );

    return *this;
}

/**
	FUNCTIONS
**/
void NinjaTrap::ninjaShoebox( ClapTrap & ct )
{
	std::cout << "I'm a clone or not ? " << std::endl;
	std::cout << "My name is " << ct.getName( ) << std::endl;
	return ;
}
void NinjaTrap::ninjaShoebox( NinjaTrap & nt )
{
	std::cout << "Maybe i'm a clone of clone !" << std::endl;
	std::cout << "My name is " << nt.getName( ) << std::endl;
	return ;
}
void NinjaTrap::ninjaShoebox( ScavTrap & st )
{
	std::cout << "I'm NINJA SCAAAAAAAVVVV, but maybe i'm not !" << std::endl;
	std::cout << "My name is " << st.getName( ) << std::endl;
	return ;
}
void NinjaTrap::ninjaShoebox( FragTrap & ft )
{
	std::cout << "I'm a FRAGTRAP NINJA and i kill you !" << std::endl;
	std::cout << "My name is " << ft.getName( ) << std::endl;
	return ;
}


