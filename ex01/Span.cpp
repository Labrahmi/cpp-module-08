/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:44:16 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/10/26 10:49:34 by ylabrahm         ###   ########.fr       */
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
	std::vector<int>::iterator it = std::find(this->vec.begin(), this->vec.end(), number);
	if ((this->vec.size() + 1) > this->N)
		throw std::runtime_error("The range has reached maximum capacity!");
	else if (it != this->vec.end())
		throw std::runtime_error("Can't add this element, Already exist!");
	else
		this->vec.push_back(number);
}

unsigned int Span::shortestSpan()
{
	unsigned int sp = 0;
	if (this->vec.size() < 2)
		throw std::runtime_error("[Span::shortestSpan] : size too low");
	else
	{
		unsigned int sp = abs(static_cast<int>(vec[0] - vec[1]));
		for (size_t i = 0; i < this->vec.size() - 1; i++)
		{
			unsigned int tem_diff = abs(static_cast<int>(vec[i] - vec[i + 1]));
			if (tem_diff < sp)
				sp = tem_diff;
		}
	}
	return (sp);
}

unsigned int Span::longestSpan()
{
	unsigned int lp = 0;
	if (this->vec.size() < 2)
		throw std::runtime_error("[Span::longestSpan] : size too low");
	else
	{
		for (size_t i = 0; i < this->vec.size() - 1; i++)
		{
			unsigned int tem_diff = abs(static_cast<int>(vec[i] - vec[i + 1]));
			if (tem_diff > lp)
				lp = tem_diff;
		}
	}
	return lp;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */