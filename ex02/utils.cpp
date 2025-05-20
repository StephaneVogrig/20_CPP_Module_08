/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 19:31:06 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/13 23:07:56 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "utils.hpp"

#define WIDTH 80

void displaySubtest(const std::string & title)
{
	int padding = (WIDTH - 2 - title.length()) / 2;
	std::string left = std::string(padding, '-');
	std::string right = std::string(WIDTH - padding - 2 - title.length(), '-');
	std::cout << GREEN << '\n';
	std::cout<< left << " "  << title << " " << right << '\n';
	std::cout << RESET << std::endl;
}

void displaySection(const std::string & title)
{
	std::cout << '\n';
	int padding = (WIDTH - 2 - title.length()) / 2;
	std::string star = std::string(WIDTH, '*');
	std::string blankLeft = std::string(padding, ' ');
	std::string blankRight = std::string(WIDTH - padding - 2 - title.length(), ' ');
	std::cout << GREEN << star << '\n';
	std::cout << "*" << blankLeft << title << blankRight << "*" << '\n';
	std::cout << star << RESET << std::endl;
}
