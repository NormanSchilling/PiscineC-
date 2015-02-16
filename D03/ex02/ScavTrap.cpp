/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 15:03:30 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/08 18:57:25 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ScavTrap.hpp"

/**
	CONSTRUCTOR
**/
ScavTrap::ScavTrap( void )
{
	this->_name = "Claptrap";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	std::cout << "I'm not a FragTrap - " << this->_name << " is alive !" << std::endl;

	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	std::cout << "I'm not a FragTrap - " << this->_name << " is alive !" << std::endl;

	return ;
}

ScavTrap::ScavTrap( ScavTrap const &ft ) : ClapTrap( ft )
{
	std::cout << "I'm not a FragTrap - " << this->_name << " is alive !" << std::endl;
	return ;
}
/**
	DESTRUCTOR
**/
ScavTrap::~ScavTrap( void )
{
	std::cout << "Nooooooooooo ! I'm " << this->_name << " and i'm dead ! " << std::endl;
	return ;
}


/**
	ASSIGN OPERATOR
**/
ScavTrap &ScavTrap::operator=(ScavTrap const &ft)
{
	ClapTrap::operator=( ft );

    return *this;
}

/**
	FUNCTIONS
**/
void ScavTrap::challengeNewcomer( void ) const 
{
	int random = rand() % 5;


	if ( random == 0 )
		challengeDoctor( );
	else if ( random == 1 )
		challengeMakeMusic( );
	else if ( random == 2 )
		challengeDance( );
	else if ( random == 3 )
		ChallengeMakeSomething( );
	else if ( random == 4 )
		ChallengeWhoiam( );
}

void	ScavTrap::challengeDoctor( void ) const
{
	std::cout << "ChallengeDoctor select : " << std::endl;
	std::cout << "YES, i'm repaired ! What do you do bro ?" << std::endl;
}
void	ScavTrap::challengeMakeMusic( void ) const
{
	std::cout << "challengeMakeMusic select : " << std::endl;
	std::cout << "Do you hear ? It's my rap music ! " << std::endl;
}
void	ScavTrap::challengeDance( void ) const
{
	std::cout << "challengeDance select : " << std::endl;
	std::cout << "Hehe, Do you like my dance Bro ? " << std::endl;
}
void	ScavTrap::ChallengeMakeSomething( void ) const
{
	std::cout << "ChallengeMakeSomething select : " << std::endl;
	std::cout << "Yaaaaaaaaaaaa, i need to do something ! Go attack this monster " << std::endl;
	this->rangedAttack("Zombie");
	this->meleeAttack("Zombie");
}
void	ScavTrap::ChallengeWhoiam( void ) const
{
	std::cout << "ChallengeWhoiam select : " << std::endl;
	std::cout << "mmmmh, who i am ? if i use my function getName maybe i can knoz who i am. So let's do this"<< std::endl;
	std::cout << "Use GETNAAAAMEEEE " << this->getName() << std::endl;
}
