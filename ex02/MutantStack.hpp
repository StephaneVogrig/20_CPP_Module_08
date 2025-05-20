/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:04:20 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/20 13:03:05 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T,typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{

	public:

		typedef typename container::iterator iterator;
		typedef typename container::const_iterator const_iterator;

		typedef typename container::reverse_iterator reverse_iterator;
		typedef typename container::const_reverse_iterator const_reverse_iterator;

		MutantStack();
		MutantStack(const MutantStack & toCopy);
		~MutantStack();
		MutantStack & operator = (const MutantStack & toAssign);

		iterator				begin();
		iterator				end();

		const_iterator			begin() const;
		const_iterator			end() const;
		
		reverse_iterator		rbegin();
		reverse_iterator		rend();

		const_reverse_iterator	rbegin() const;
		const_reverse_iterator 	rend() const;

};

# include "MutantStack.tpp"

#endif
