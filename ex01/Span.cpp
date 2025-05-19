/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:27:39 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/19 23:45:36 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _max_size(N)
{}

Span::Span(const Span & toCopy) : _data(toCopy._data), _max_size(toCopy._max_size)
{}

std::ostream & operator << (std::ostream & ostream, const Span & span);

Span::~Span()
{}

Span & Span::operator = (const Span & toAssign)
{
	if (this == &toAssign)
		return *this;
	_data = toAssign._data;
	_max_size = toAssign._max_size;
	return *this;
}

void Span::addNumber(int n)
{
	if (_data.size() == _max_size)
		throw std::out_of_range("");
	_data.push_back(n);
}

int Span::shortestSpan()
{
	if (_data.size() < 2)
		throw std::runtime_error("Too few element");
	std::sort(_data.begin(), _data.end());
	
	int min = _data[1] - _data[0];
	for (size_t i = 1; i < _data.size() - 1 ; ++i)
	{
		int current_min = _data[i + 1] - _data[i];
		if (current_min < min)
			min = current_min;
	}
	return min;
}

int Span::longestSpan()
{
	if (_data.size() < 2)
		throw std::runtime_error("Too few element");
	int min = *std::min_element(_data.begin(), _data.end());
	int max = *std::max_element(_data.begin(), _data.end());
	
	return max - min;
}

void Span::display()
{
	for (std::vector<int>::iterator it = _data.begin(); it != _data.end(); ++it)
		std::cout << *it << '\n';
	std::cout.flush();
}
