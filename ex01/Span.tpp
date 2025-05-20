/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:58:13 by svogrig           #+#    #+#             */
/*   Updated: 2025/05/20 11:01:00 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename InputIterator>
void Span::addRange(InputIterator begin, InputIterator end)
{
	if (static_cast<unsigned int>(std::distance(begin, end)) > _max_size - _data.size())
		throw std::runtime_error("not enough space in span to receive data");
	_data.insert(_data.end(), begin, end);
}
