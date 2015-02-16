/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:11:04 by nschilli          #+#    #+#             */
/*   Updated: 2015/01/15 17:14:14 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template< typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void );
		// MutantStack( MutantStack const & src );
		~MutantStack( void );

		// MutantStack &			operator=( MutantStack const & rhs );

};

#endif

