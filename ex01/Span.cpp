/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:44:16 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/12/29 00:03:32 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->N = rhs.N;
		this->vec = rhs.vec;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int number)
{
	if (this->vec.size() == N)
		throw std::runtime_error("The range has reached maximum capacity!");
	this->vec.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> temp;
	temp.insert(temp.end(), begin, end);
	unsigned int new_size = temp.size() + this->vec.size();
	if (this->N < new_size)
		throw std::runtime_error("Can't insert range: too many items.");
	vec.insert(vec.end(), begin, end);
}

unsigned int Span::shortestSpan()
{
	std::vector<int> sorted = this->vec;
	std::sort(sorted.begin(), sorted.end());
	std::vector<int> diff;
	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		diff.push_back(sorted[i + 1] - sorted[i]);
	}
	int sp = *(std::min_element(diff.begin(), diff.end()));
	return sp;
}

unsigned int Span::longestSpan()
{
	int max = *(std::max_element(this->vec.begin(), this->vec.end()));
	int min = *(std::min_element(this->vec.begin(), this->vec.end()));
	return (max - min);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */