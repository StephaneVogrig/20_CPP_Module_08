/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 21:27:07 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/20 16:16:12 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <ctime>

#include "Span.hpp"
#include "utils.hpp"

void printResult(Span & sp)
{
	std::cout << YELLOW "shortest span: " RESET << sp.shortestSpan() << std::endl;
	std::cout << YELLOW "longest span : " RESET << sp.longestSpan() << std::endl;
}

int main(void)
{
	displaySection("Span");
	
	{
		displaySubtest("subject");
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		printResult(sp);
	}

	{
		displaySubtest("big number random number");
		int bigSize = 200000;
		Span sp(bigSize);
		srand(std::time(NULL));
		for (int i = 0; i < bigSize; ++i)
		{
			
			int ir = (static_cast<double>(std::rand()) / RAND_MAX) * bigSize;
			sp.addNumber(ir);
		}
		printResult(sp);
	}

	{
		displaySubtest("big number same number");
		int bigSize = 200000;
		Span sp(bigSize);
		srand(clock());
		int ir = (static_cast<double>(std::rand()) / RAND_MAX) * bigSize;
		for (int i = 0; i < bigSize; ++i)
		{
			sp.addNumber(ir);
		}
		printResult(sp);
	}

	{
		displaySubtest("range with enough space");
		std::vector<int> vec(4, 42);
		Span sp = Span(10);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addRange(vec.begin(), vec.end());
		sp.display();
		printResult(sp);
	}

	{
		try
		{
			displaySubtest("range without enough space");
			std::vector<int> vec(4, 42);
			Span sp = Span(0);
			sp.addRange(vec.begin(), vec.end());
			sp.display();
			printResult(sp);
		}
		catch(const std::runtime_error & e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	return EXIT_SUCCESS;
}
