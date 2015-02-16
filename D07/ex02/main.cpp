/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 14:36:43 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/14 19:39:17 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Array.hpp"

int		main( void )
{
	Array<int>	a(8);
	Array<int>	b(8);
	Array<int>	c;
	a[2] = 42;
	try
	{
		c[2] = 42;
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << std::endl;
	}

	b = a;
	try
	{
		std::cout << a[2] << std::endl;
		std::cout << b[9] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<int>		intArray( 5 );

	intArray[3] = 42;

	try
	{
		for ( unsigned int i = 0; i < intArray.size() + 5; i++ )
			std::cout << "intArray[" << i << "]: " << intArray[i] << std::endl;
	}
	catch ( std::exception & e )
	{
		std::cerr << e.what() << std::endl;
	}
	Array<std::string>		stringArray( 5 );

	stringArray[2] = "Test";

	for ( unsigned int i = 0; i < stringArray.size(); i++ )
		std::cout << "stringArray[" << i << "]: " << stringArray[i] << std::endl;

	Array<int>					test_int(3);
	Array<std::string>			test_str(3);
	Array<std::string>			test_str2;
	Array< Array<int> >			test_array_int(3);

	for (int i = 0; i < 3; ++i)
	{
		test_int[i] = i;
		std::cout << "test_int[" << i <<"] = " << test_int[i] << std::endl;
	}
	try
	{
		std::cout << "Try to assign test[42] = 42 :" << std::endl;
		test_int[42] = 42;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 3; ++i)
	{
		test_str[i] = "NYAN NYAN NYAN NYAN NYAN NYAN NYAN NYAN";
		std::cout << "test_str[" << i <<"] = " << test_str[i] << std::endl;
	}

	test_str2 = test_str;

	for (int i = 0; i < 3; ++i)
	{
		std::cout << "test_str2[" << i <<"] = " << test_str2[i] << std::endl;
	}

	for (int i = 0; i < 3; ++i)
	{
		test_array_int[i] = Array<int>(3);
		for (int j = 0; j < 3; ++j)
		{
			test_array_int[i][j] = 42;
			std::cout << "test_array_int[" << i <<"][" << j << "] = " << test_array_int[i][j] << std::endl;
		}
	}

	return 0;
	return ( 0 );
}
