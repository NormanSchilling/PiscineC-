/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 14:13:36 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/05 20:37:31 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

void	errorCommand( std::string cmd )
{
	std::cout << "ERROR : this command does not exist !" << std::endl;

	return ;
}

void	add( Contact listContact[8] )
{
	std::string 	_firstName;
	std::string 	_lastName;
	std::string 	_nickName;
	std::string 	_login;
	std::string		_adress;
	std::string		_email;
	std::string		_phone;
	std::string 	_birthday;
	std::string 	_favoriteMeal;
	std::string 	_underwearColor;
	std::string 	_darkestSecret;


	if ( Contact::numberContact > 7 ) {
		std::cout << "ERROR : you can't add more contacts" << std::endl;
	} else {
		std::cout << "Firstname : ";
		std::getline ( std::cin, _firstName );
		listContact[Contact::numberContact].setFirstName( _firstName );

		std::cout << "Lastname : ";
		std::getline ( std::cin, _lastName );
		listContact[Contact::numberContact].setLastName( _lastName );
		
		std::cout << "Nickname : ";
		std::getline ( std::cin, _nickName );
		listContact[Contact::numberContact].setNickName( _nickName );

		std::cout << "Login : ";
		std::getline ( std::cin, _login );
		listContact[Contact::numberContact].setLogin( _login );

		std::cout << "Adress : ";
		std::getline ( std::cin, _adress );
		listContact[Contact::numberContact].setAdress( _adress );

		std::cout << "Email : ";
		std::getline ( std::cin, _email );
		listContact[Contact::numberContact].setEmail( _email );

		std::cout << "Phone Number : ";
		std::getline ( std::cin, _phone );
		listContact[Contact::numberContact].setEmail( _phone );

		std::cout << "Birthday Date : ";
		std::getline ( std::cin, _birthday );
		listContact[Contact::numberContact].setBirthday( _birthday );

		std::cout << "Favorite Meal : ";
		std::getline ( std::cin, _favoriteMeal );
		listContact[Contact::numberContact].setFavoriteMeal( _favoriteMeal );

		std::cout << "Underzear Color : ";
		std::getline ( std::cin, _underwearColor );
		listContact[Contact::numberContact].setUnderwearColor( _underwearColor );

		std::cout << "Darkest Secret : ";
		std::getline ( std::cin, _darkestSecret );
		listContact[Contact::numberContact].setDarkestSecret( _darkestSecret );

		Contact::numberContact++;
	}

	return ;
}


void	addSpace( std::string str, int length )
{
	int				offset;

	offset = 10 - length;
	while ( offset > 0) {
		std::cout << " ";
		offset--;
	}
	std::cout << str;
}

void	resizeString( std::string str )
{
	str.resize( 9 );
	str.replace( 9, 1, ".");
	std::cout << str;
}

void	searchListContact( Contact listContact[8] )
{
	int		i;
	int		j;

	i = 0;
	while ( i < Contact::numberContact ) {
		j = 9;
		while ( j > 0) {
			std::cout << " ";
			j--;
		}
		std::cout << i;
		std::cout << "|";
		if ( listContact[i].getFirstName( ).length( ) > 10 )
			resizeString( listContact[i].getFirstName( ) );
		else
			addSpace( listContact[i].getFirstName( ), listContact[i].getFirstName( ).length( ) );
		std::cout << "|";
		if ( listContact[i].getLastName( ).length( ) > 10 )
			resizeString( listContact[i].getLastName( ) );
		else 
			addSpace( listContact[i].getLastName( ), listContact[i].getLastName( ).length( ) );
		std::cout << "|";
		if ( listContact[i].getNickName( ).length( ) > 10 )
			resizeString( listContact[i].getNickName( ) );
		else 
			addSpace( listContact[i].getNickName( ), listContact[i].getNickName( ).length( ) );
		std::cout << std::endl;
		i++;
	}
}

void	selectContact( Contact listContact[8] )
{
	int				i;
	std::string		index;

	std::cout << "Choose a index to see more informations about the contact : ";
	std::getline ( std::cin, index );


	i = index[0] - 48;
	while ( i > Contact::numberContact - 1 || index.length( ) > 1 ) {
		std::cout << "Choose a index to see more informations about the contact : ";
		std::getline ( std::cin, index );
		i = index[0] - 48;
		if ( i < Contact::numberContact - 1  && index.length( ) == 1 )
			break ;
	}

	i = index[0] - 48;
	std::cout << "Firstname : " << listContact[i].getFirstName( );
	std::cout << std::endl;
	std::cout << "Lastname : " << listContact[i].getLastName( );
	std::cout << std::endl;
	std::cout << "Nickname : " << listContact[i].getNickName( );
	std::cout << std::endl;
	std::cout << "Login : " << listContact[i].getLogin( );
	std::cout << std::endl;
	std::cout << "Adress : " << listContact[i].getAdress( );
	std::cout << std::endl;
	std::cout << "Email : " << listContact[i].getEmail( );
	std::cout << std::endl;
	std::cout << "Phone Number : " << listContact[i].getPhone( );
	std::cout << std::endl;
	std::cout << "Birthday Date : " << listContact[i].getBirthday( );
	std::cout << std::endl;
	std::cout << "Favorite Meal : " << listContact[i].getFavoriteMeal( );
	std::cout << std::endl;
	std::cout << "Underzear Color : " << listContact[i].getUnderwearColor( );
	std::cout << std::endl;
	std::cout << "Darkest Secret : " << listContact[i].getDarkestSecret( );
	std::cout << std::endl;

	return ;
}

void	search( Contact listContact[8] )
{
	if ( Contact::numberContact == 0 ) {
		std::cout << "they are no contact, u need to add some contact BROTHER ! " << std::endl;
		return ;
	}
	searchListContact( listContact );
	selectContact( listContact );
	return ;
}

void	exit( void )
{
	std::cout << "You exit the phonebook. Bye !" << std::endl;

	return ;
}

void	chooseCommand( void )
{
	Contact 		listContact[8];
	std::string		cmd;

	while ( 1 ) {
		std::cout << "choose a new command (ADD, SEARCH, EXIT) : ";
		std::getline ( std::cin, cmd );
		std::cout << "Command choose is : " << cmd << std::endl;
		if ( cmd == "ADD")
		{
			add( listContact );
		}
		else if ( cmd == "SEARCH" )
			search( listContact );
		else if ( cmd == "EXIT" ) {
			exit( );
			break ;
		}
		else
			errorCommand( cmd );
	}

	return ;
}

int		main( void )
{
	chooseCommand( );

	return 0;
}