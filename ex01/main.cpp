/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:44:47 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/10/26 10:47:24 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(10);
    std::vector<int> numbers;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int vl = (rand() % 50);
        std::cout << vl << std::endl;
        numbers.push_back(static_cast<int>(vl));
    }
    try
    {
        sp.addRange(numbers.begin(), numbers.end());
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        exit(EXIT_FAILURE);
    }
    try
    {
        std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;
        std::cout << "longes Span : " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
