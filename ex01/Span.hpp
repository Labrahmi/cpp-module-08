/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:44:12 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/10/26 10:47:00 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <algorithm>
#include <unordered_set>

class Span
{

public:
	Span(Span const &src);
	~Span();
	Span &operator=(Span const &rhs);

	Span(unsigned int N);
	void addNumber(int number);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	template <typename Iterator>
	void addRange(Iterator begin, Iterator end)
	{
		std::vector<int> temp;
		temp.insert(temp.end(), vec.begin(), vec.end());
		temp.insert(temp.end(), begin, end);

		if (temp.size() > N)
		{
			throw std::runtime_error("Can't insert range: too many items.");
			return;
		}

		std::unordered_set<int> checker(temp.begin(), temp.end());
		if (checker.size() != temp.size())
		{
			throw std::runtime_error("Can't insert range: Duplicate value detected.");
			return;
		}

		vec.insert(vec.end(), begin, end);
	}

private:
	unsigned int N;
	std::vector<int> vec;
};

#endif /* ************************************************************ SPAN_H */