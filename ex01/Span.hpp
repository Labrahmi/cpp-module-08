/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:44:12 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/10/25 19:15:29 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{

public:
	Span(Span const &src);
	~Span();
	Span &operator=(Span const &rhs);

	Span(unsigned int N);
	void addNumber(int number);

private:
	unsigned int N;
	std::vector<int> vec;
};

#endif /* ************************************************************ SPAN_H */