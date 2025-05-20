/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:05:18 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/20 16:35:38 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/* constructor -------------------------------------------------------------- */

template <typename T,typename container>
MutantStack<T, container>::MutantStack() : std::stack<T, container>()
{}

template <typename T,typename container>
MutantStack<T, container>::MutantStack(const MutantStack & toCopy) : std::stack<T, container>(toCopy)
{}

/* destructor --------------------------------------------------------------- */

template <typename T,typename container>
MutantStack<T, container>::~MutantStack()
{}

/* operator ----------------------------------------------------------------- */

template <typename T,typename container>
MutantStack<T, container> & MutantStack<T, container>::operator = (const MutantStack & toAssign)
{
	if (this == toAssign)
		return this;
	std::stack<T, container>::operator=(toAssign);
	return *this;
}

/* iterator ----------------------------------------------------------------- */

template <typename T,typename container>
typename MutantStack<T, container>::iterator MutantStack<T, container>::begin()
{
	return this->c.begin();
}

template <typename T,typename container>
typename MutantStack<T, container>::iterator MutantStack<T, container>::end()
{
	return this->c.end();
}

template <typename T,typename container>
typename MutantStack<T, container>::const_iterator MutantStack<T, container>::begin() const
{
	return this->c.begin();
}

template <typename T,typename container>
typename MutantStack<T, container>::const_iterator MutantStack<T, container>::end() const
{
	return this->c.end();
}

template <typename T,typename container>
typename MutantStack<T, container>::reverse_iterator MutantStack<T, container>::rbegin()
{
	return this->c.rbegin();
}

template <typename T,typename container>
typename MutantStack<T, container>::reverse_iterator MutantStack<T, container>::rend()
{
	return this->c.rend();
}

template <typename T,typename container>
typename MutantStack<T, container>::const_reverse_iterator MutantStack<T, container>::rbegin() const
{
	return this->c.rbegin();
}

template <typename T,typename container>
typename MutantStack<T, container>::const_reverse_iterator 	MutantStack<T, container>::rend() const
{
	return this->c.rend();
}
