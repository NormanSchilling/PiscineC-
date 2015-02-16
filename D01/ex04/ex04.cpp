/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 15:45:01 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/06 16:01:58 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void )
{
	std::string str = "HI THIS IS BRAIN";

	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << "Normal String : " << str << std::endl;
	std::cout << "Pointeur : " << *strPtr << std::endl;
	std::cout << "Reference : " << strRef << std::endl;

	return 0;
}