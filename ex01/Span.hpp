/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:44:12 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/12/28 23:46:53 by ylabrahm         ###   ########.fr       */
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
	~Span();
	Span(unsigned int N);
	Span(Span const &src);
	Span &operator=(Span const &rhs);
	void addNumber(int number);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
private:
	unsigned int N;
	std::vector<int> vec;
};

#endif /* ************************************************************ SPAN_H */