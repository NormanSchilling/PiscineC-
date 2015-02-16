/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 15:12:37 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/13 21:15:51 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

struct Data 
{ 
    std::string s1;
    int n; 
    std::string s2; 
};

char *    randomString( int size )
{
    char *str = new char[size];

    static const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for ( int i = 0; i < size; i++ )
        str[i] = alphanum[rand() % ( sizeof( alphanum ) - 1 )];
    return ( str );
}

void *serialize( void )
{
    char        *p = new char[19];
    char        *str1;
    char        *str2;
    int         n;
    str1 = randomString(8);
    n = rand();
    str2 = randomString(8);

    for (int i = 0; i <= 19; i++)
    {
        if ( i < 8 ) 
        {
            p[i] = str1[i];
        } 
        else if ( i >= 8 && i < 12 )
        {
            p[i] = (reinterpret_cast<char *>(&n))[i - 8];
        } 
        else if ( i >= 12 && i <= 19) 
        {
            p[i] = str2[i - 12];
        }
    }

    return static_cast<void *>(p);

}

Data * deserialize( void * raw )
{
    Data *d = new Data();
    char   *s1 = new char[8];

    char   *s3 = new char[8];
    char *str = static_cast<char *>(raw);
    int     n;
    str[20] = '\0';

    for (int i = 0; i <= 19; i++)
    {
        if ( i < 8 ) 
        {
            s1[i] = str[i];
        }
        else if ( i == 8)
        {
            n = *(reinterpret_cast<int*>(str+i));
        }
        else if ( i >= 12 && i <= 19)
        {
            s3[i - 12] = str[i];
        }
    }
    d->s1 = static_cast<std::string>(s1);
    d->n = n;
    d->s2 = static_cast<std::string>(s3);
    return d;
}

int main()
{
    srand(time(0));
    void *serial = serialize();
    Data *data = deserialize(serial);

    std::cout << data->s1 << std::endl;
    std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;

    return 0;
}