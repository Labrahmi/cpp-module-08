/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:13:15 by macbook           #+#    #+#             */
/*   Updated: 2023/12/28 22:28:54 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
    std::vector<int> vec;
    vec.push_back(0);
    vec.push_back(4);
    vec.push_back(2);
    try
    {
        int res = easyfind(vec, 79486);
        // int res = easyfind(vec, 4);
        std::cout << "Element founded: " << res << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Not found!" << '\n';
    }
    return 0;
}
