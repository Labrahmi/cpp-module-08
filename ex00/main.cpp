/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:13:15 by macbook           #+#    #+#             */
/*   Updated: 2023/10/25 18:32:35 by ylabrahm         ###   ########.fr       */
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
    if (easyfind(vec, 7))
        std::cout << "The item exists" << std::endl;
    else
        std::cout << "The item does not exist" << std::endl;
    return 0;
}
