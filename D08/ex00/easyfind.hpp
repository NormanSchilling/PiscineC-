/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 10:02:40 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/15 15:07:00 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
int	easyfind(T &contenor, int b)
{
	typename T::const_iterator it;
	typename T::const_iterator ite = contenor.end();

	bool check = false;
	for ( it = contenor.begin(); it != ite; ++it )
	{
		if ( b == *it )
		{
			return *it;
			check = true;
			break ;
		}
	}
	if ( check == false )
		throw std::string("Not found ! ");
	return 0;
}