/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 09:34:56 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 15:13:09 by nschilli         ###   ########.fr       */
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

FragTrap::FragTrap( std::string name ) : _name(name)
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

FragTrap::FragTrap( FragTrap const &ft )
{
	*this = ft;

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
	if ( this != &ft ) {
		this->_hitPoints = ft.getHitPoints( );
		this->_maxHitPoints = ft.getMaxHitPoints( );
		this->_energyPoints = ft.getEnergyPoints( );
		this->_maxEnergyPoints = ft.getMaxEnergyPoints( );
		this->_level = ft.getLevel( );
		this->_name = ft.getName( );
		this->_meleeAttackDamage = ft.getMeleeAttackDamage( );
		this->_rangedAttackDamage = ft.getRangedAttackDamage( );
		this->_armorDamageReduction = ft.getArmorDamageReduction( );
	}

    return *this;
}

/**
	FUNCTIONS
**/
void FragTrap::rangedAttack(std::string const & target) const
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

void FragTrap::meleeAttack(std::string const & target) const
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

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

void	FragTrap::attackLazer( void ) const
{
	std::cout << "OOOOOOOOHHH ! It's myyyyy lazeeeerrr attack !" << std::endl;
}
void	FragTrap::attackBomb( void ) const
{
	std::cout << "Eat my bomb attack ! " << std::endl;
}
void	FragTrap::attackDance( void ) const
{
	std::cout << "Hehe, Do you like my dance Bro ? " << std::endl;
}
void	FragTrap::attackCarambarJoke( void ) const
{
	std::cout << "HAHA Best joke attack ever or not !" << std::endl;
}
void	FragTrap::attackHead( void ) const
{
	std::cout << "I'm nervous, check my head attack !" << std::endl;
}


/**
	GETTER
**/
std::string 			FragTrap::getName( void ) const
{
	return this->_name;
}
unsigned int 	 		FragTrap::getHitPoints( void ) const
{
	return this->_hitPoints;
}
unsigned int 			FragTrap::getMaxHitPoints( void ) const
{
	return this->_maxHitPoints;
}
unsigned int 			FragTrap::getEnergyPoints( void ) const
{
	return this->_energyPoints;
}
unsigned int 			FragTrap::getMaxEnergyPoints( void ) const
{
	return this->_maxEnergyPoints;
}
unsigned int 			FragTrap::getLevel( void ) const
{
	return this->_level;
}
unsigned int 			FragTrap::getMeleeAttackDamage( void ) const
{
	return this->_meleeAttackDamage;
}
unsigned int 			FragTrap::getRangedAttackDamage( void ) const
{
	return this->_rangedAttackDamage;
}
unsigned int 			FragTrap::getArmorDamageReduction( void ) const
{
	return this->_armorDamageReduction;
}

/**
	SETTER
**/


