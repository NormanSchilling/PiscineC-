/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 09:59:57 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/15 15:06:19 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <map>
#include <iostream>
#include <stdexcept>

#include "easyfind.hpp"

int		main( void )
{
	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(9);
	lst.push_back(2);
	lst.push_back(25);

	try
	{
		std::cout << ::easyfind(lst, 5) << std::endl;
	}
	catch (std::string & str)
	{
		std::cerr << str << std::endl;
	}

	std::vector<int> vec;

	vec.push_back(5);
	vec.push_back(10);
	vec.push_back(9);
	vec.push_back(2);
	vec.push_back(25);

	try
	{
		std::cout << ::easyfind(vec, 25) << std::endl;
	}
	catch (std::string & str)
	{
		std::cerr << str << std::endl;
	}

	return 0;
}