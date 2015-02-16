/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 14:48:43 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/05 17:44:01 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact 
{
	public:
		Contact( void );
		~Contact( void );

		static int		numberContact;

		std::string		getFirstName( void ) const;
		std::string		getLastName( void ) const;
		std::string		getNickName( void ) const;
		std::string		getLogin( void ) const;
		std::string		getAdress( void ) const;
		std::string		getEmail( void ) const;
		std::string		getPhone( void ) const;
		std::string		getBirthday( void ) const;
		std::string		getFavoriteMeal( void ) const;
		std::string		getUnderwearColor( void ) const;
		std::string		getDarkestSecret( void ) const;

		std::string		setFirstName( std::string _firstName );
		std::string		setLastName( std::string _lastName );
		std::string		setNickName( std::string _nickName );
		std::string		setLogin( std::string _login );
		std::string		setAdress( std::string _adress );
		std::string		setEmail( std::string _email );
		std::string		setPhone( std::string _phone );
		std::string		setBirthday( std::string _birthday );
		std::string		setFavoriteMeal( std::string _favoriteMeal );
		std::string		setUnderwearColor( std::string _underwearColor );
		std::string		setDarkestSecret( std::string _darkestSecret );


	private:
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

};