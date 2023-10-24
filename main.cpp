/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:13:15 by macbook           #+#    #+#             */
/*   Updated: 2023/10/24 00:27:09 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
    std::vector<int> vec;
    vec.push_back(0);
    vec.push_back(6);
    vec.push_back(2);
    std::cout << (easyfind(vec, 7) ? "" : "Not ") << "Founded!" << std::endl;
    return 0;
}
