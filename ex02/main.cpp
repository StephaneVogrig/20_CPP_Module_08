/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 21:27:07 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/20 13:06:46 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <list>

#include "MutantStack.hpp"
#include "utils.hpp"

int main(void)
{
	displaySection("NutantSatck");

	displaySubtest("subject test with MutantStack");
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << '\n'; // add for clarity display
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	displaySubtest("test const with MutantStack");
	const MutantStack<int> const_mstack = mstack;
	MutantStack<int>::const_iterator cit = const_mstack.begin();
	MutantStack<int>::const_iterator cite = const_mstack.end();
	for (MutantStack<int>::const_iterator it = cit; it != cite; ++it)
		std::cout << *it << std::endl;
		
	displaySubtest("test reverse with MutantStack");
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	for (MutantStack<int>::reverse_iterator it = rit; it != rite; ++it)
		std::cout << *it << std::endl;

	displaySubtest("test const reverse with MutantStack");
	MutantStack<int>::const_reverse_iterator crit = const_mstack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = const_mstack.rend();
	for (MutantStack<int>::const_reverse_iterator it = crit; it != crite; ++it)
		std::cout << *it << std::endl;
	
	{
		displaySubtest("subject test with std::list");
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "back: " << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << "size: " << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		std::cout << '\n'; // add for clarity display
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mlist);
		
		displaySubtest("test const with std::list");
		const std::list<int> const_mlist = mlist;
		std::list<int>::const_iterator cit = const_mlist.begin();
		std::list<int>::const_iterator cite = const_mlist.end();
		for (std::list<int>::const_iterator it = cit; it != cite; ++it)
			std::cout << *it << std::endl;
		
		displaySubtest("test reverse with std::list");
		std::list<int>::reverse_iterator rit = mlist.rbegin();
		std::list<int>::reverse_iterator rite = mlist.rend();
		for (std::list<int>::reverse_iterator it = rit; it != rite; ++it)
			std::cout << *it << std::endl;
	
		displaySubtest("test const reverse with std::list");
		std::list<int>::const_reverse_iterator crit = const_mlist.rbegin();
		std::list<int>::const_reverse_iterator crite = const_mlist.rend();
		for (std::list<int>::const_reverse_iterator it = crit; it != crite; ++it)
			std::cout << *it << std::endl;
	}

	return EXIT_SUCCESS;
}
