/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:27:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/15 13:50:16 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>
# include <algorithm>

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

	private:

		std::vector<int>	_data;
		unsigned int		_max_size;
	
};

#endif