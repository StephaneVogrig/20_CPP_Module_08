/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:52:58 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/13 23:04:29 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <vector>
#include <list>
#include "utils.hpp"
#include "easyfind.hpp"

template <typename T>
void testEasyFind(T & container, int value)
{
	typename T::iterator it = easyfind(container, value);
	if (it != container.end())
		std::cout << "value " << value << GREEN " was found" RESET << std::endl;
	else
		std::cout << "value " << value << RED " was not found" RESET << std::endl;
}

int main(void)
{
	displaySection("easyfind");

	displaySubtest("vector");
	std::vector<int> vectorInt;
	vectorInt.push_back(1);
	vectorInt.push_back(2);
	vectorInt.push_back(3);
	
	testEasyFind(vectorInt, 1);
	testEasyFind(vectorInt, 2);
	testEasyFind(vectorInt, 3);
	testEasyFind(vectorInt, 4);

	displaySubtest("list");
	std::list<int> listInt;
	listInt.push_back(10);
	listInt.push_back(20);
	listInt.push_back(30);
	
	testEasyFind(listInt, 10);
	testEasyFind(listInt, 20);
	testEasyFind(listInt, 30);
	testEasyFind(listInt, 40);

	return EXIT_SUCCESS;
}
