/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 16:24:49 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 18:43:05 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"


/**
	CONSTRUCTOR
**/
ClapTrap::ClapTrap( void )
{
	std::cout << "A ClapTrap is born" << std::endl;

	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
	std::cout << "A ClapTrap is born" << std::endl;

	return ;
}

ClapTrap::ClapTrap( ClapTrap const &ct )
{
	*this = ct;

	std::cout << "Allow me to introduce myself - " << " I'm " << this->_name << " and i'm alive !" << std::endl;

	return ;
}

/**
	DESTRUCTOR
**/
ClapTrap::~ClapTrap( void )
{
	std::cout << "A ClapTrap is dead" << std::endl;
	return ;
}

/**
	ASSIGN OPERATOR
**/
ClapTrap &ClapTrap::operator=(ClapTrap const &ct)
{
	if ( this != &ct ) {
		this->_hitPoints = ct.getHitPoints( );
		this->_maxHitPoints = ct.getMaxHitPoints( );
		this->_energyPoints = ct.getEnergyPoints( );
		this->_maxEnergyPoints = ct.getMaxEnergyPoints( );
		this->_level = ct.getLevel( );
		this->_name = ct.getName( );
		this->_meleeAttackDamage = ct.getMeleeAttackDamage( );
		this->_rangedAttackDamage = ct.getRangedAttackDamage( );
		this->_armorDamageReduction = ct.getArmorDamageReduction( );
	}

    return *this;
}

/**
	FUNCTIONS
**/
void ClapTrap::rangedAttack(std::string const & target) const
{
	int random = rand() % 5;

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing "  << this->_rangedAttackDamage << " points of damage ! " << std::endl;

	if ( random == 0 )
		attackLazer( );
	else if ( random == 1 )
		attackBomb( );
	else if ( random == 2 )
		attackDance( );
	else if ( random == 3 )
		attackCarambarJoke( );
	else if ( random == 4 )
		attackHead( );

	return ;
}

void ClapTrap::meleeAttack(std::string const & target) const
{
	int random = rand() % 5;

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing "  << this->_meleeAttackDamage << " points of damage ! " << std::endl;

	if ( random == 0 )
		attackLazer( );
	else if ( random == 1 )
		attackBomb( );
	else if ( random == 2 )
		attackDance( );
	else if ( random == 3 )
		attackCarambarJoke( );
	else if ( random == 4 )
		attackHead( );

	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->_armorDamageReduction;
	if ( amount <= this->_maxHitPoints ) {
		if ( amount == this->_hitPoints ) {
			this->_hitPoints = 0;
		} else {
			this->_hitPoints = this->_hitPoints - amount;
		}
		std::cout << "FR4G-TP " <<  this->_name << " take " << amount << " points damage ! " << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ( amount >= this->_maxHitPoints ) {
		this->_hitPoints = this->_maxHitPoints;
		std::cout << "FR4G-TP " <<  this->_name << " be repaired of " << amount << " points damage ! " << std::endl;
	} else {
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << "FR4G-TP " <<  this->_name << " be repaired of " << amount << " points damage ! " << std::endl;
	}

	return ;
}


void	ClapTrap::attackLazer( void ) const
{
	std::cout << "OOOOOOOOHHH ! It's myyyyy lazeeeerrr attack !" << std::endl;
}
void	ClapTrap::attackBomb( void ) const
{
	std::cout << "Eat my bomb attack ! " << std::endl;
}
void	ClapTrap::attackDance( void ) const
{
	std::cout << "Hehe, Do you like my dance Bro ? " << std::endl;
}
void	ClapTrap::attackCarambarJoke( void ) const
{
	std::cout << "HAHA Best joke attack ever or not !" << std::endl;
}
void	ClapTrap::attackHead( void ) const
{
	std::cout << "I'm nervous, check my head attack !" << std::endl;
}


/**
	GETTER
**/
std::string 			ClapTrap::getName( void ) const
{
	return this->_name;
}
unsigned int 	 		ClapTrap::getHitPoints( void ) const
{
	return this->_hitPoints;
}
unsigned int 			ClapTrap::getMaxHitPoints( void ) const
{
	return this->_maxHitPoints;
}
unsigned int 			ClapTrap::getEnergyPoints( void ) const
{
	return this->_energyPoints;
}
unsigned int 			ClapTrap::getMaxEnergyPoints( void ) const
{
	return this->_maxEnergyPoints;
}
unsigned int 			ClapTrap::getLevel( void ) const
{
	return this->_level;
}
unsigned int 			ClapTrap::getMeleeAttackDamage( void ) const
{
	return this->_meleeAttackDamage;
}
unsigned int 			ClapTrap::getRangedAttackDamage( void ) const
{
	return this->_rangedAttackDamage;
}
unsigned int 			ClapTrap::getArmorDamageReduction( void ) const
{
	return this->_armorDamageReduction;
}

/**
	SETTER
**/


