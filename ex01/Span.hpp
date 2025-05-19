/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:27:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/19 23:45:10 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iterator> 
# include <stdexcept>
# include <algorithm>
# include <iostream>

class Span
{
	public:

		Span(unsigned int N = 0);
		Span(const Span & toCopy);
		~Span();
		Span & operator = (const Span & toAssign);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

		template <typename InputIterator>
		void addRange(InputIterator begin, InputIterator end);
		void display();

	private:

		std::vector<int>	_data;
		unsigned int		_max_size;
	
};

template <typename InputIterator>
void Span::addRange(InputIterator begin, InputIterator end)
{
	if (static_cast<unsigned int>(std::distance(begin, end)) > _max_size - _data.size())
		throw std::runtime_error("not enough space in span to receive data");
	_data.insert(_data.end(), begin, end);
	// for (typename T::iterator it = begin; it != end; ++it)
	// 	_data.push_back(*it);
}

#endif