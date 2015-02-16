/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 14:49:02 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/05 17:57:01 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

/**
	CONSTRUCTOR
**/
Contact::Contact( void )
{
	return ;
}

/**
	DESTRUCTOR
**/
Contact::~Contact( void )
{
	return ;
}

/**
	FUNCTIONS
**/

/**
	GETTER
**/
std::string		Contact::getFirstName( void ) const
{
	return this->_firstName;
}
std::string		Contact::getLastName( void ) const
{
	return this->_lastName;
}
std::string		Contact::getNickName( void ) const
{
	return this->_nickName;
}
std::string		Contact::getLogin( void ) const
{
	return this->_login;
}
std::string		Contact::getAdress( void ) const
{
	return this->_adress;
}
std::string		Contact::getEmail( void ) const
{
	return this->_email;
}
std::string		Contact::getPhone( void ) const
{
	return this->_phone;
}
std::string		Contact::getBirthday( void ) const
{
	return this->_birthday;
}
std::string		Contact::getFavoriteMeal( void ) const
{
	return this->_favoriteMeal;
}
std::string		Contact::getUnderwearColor( void ) const
{
	return this->_underwearColor;
}
std::string		Contact::getDarkestSecret( void ) const
{
	return this->_darkestSecret;
}

/**
	SETTER
**/
std::string			Contact::setFirstName( std::string _firstName )
{
	this->_firstName = _firstName;
	return this->_firstName;
}
std::string			Contact::setLastName( std::string _lastName )
{
	this->_lastName = _lastName;
	return this->_lastName;
}
std::string			Contact::setNickName( std::string _nickName )
{
	this->_nickName = _nickName;
	return this->_nickName;
}
std::string			Contact::setLogin( std::string _login )
{
	this->_login = _login;
	return this->_login;
}
std::string			Contact::setAdress( std::string _adress )
{
	this->_adress = _adress;
	return this->_adress;
}
std::string			Contact::setEmail( std::string _email )
{
	this->_email = _email;
	return this->_email;
}
std::string			Contact::setPhone( std::string _phone )
{
	this->_phone = _phone;
	return this->_phone;
}
std::string			Contact::setBirthday( std::string _birthday )
{
	this->_birthday = _birthday;
	return this->_birthday;
}
std::string			Contact::setFavoriteMeal( std::string _favoriteMeal )
{
	this->_favoriteMeal = _favoriteMeal;
	return this->_favoriteMeal;
}
std::string			Contact::setUnderwearColor( std::string _underwearColor )
{
	this->_underwearColor = _underwearColor;
	return this->_underwearColor;
}
std::string			Contact::setDarkestSecret( std::string _darkestSecret )
{
	this->_darkestSecret = _darkestSecret;
	return this->_darkestSecret;
}

int Contact::numberContact = 0;