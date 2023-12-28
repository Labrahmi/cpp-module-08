/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:13:31 by macbook           #+#    #+#             */
/*   Updated: 2023/12/28 22:29:02 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <exception>

template <typename T>
int easyfind(T &container, int occur)
{
    for (size_t i = 0; i < container.size(); i++)
    {
        if (container.at(i) == occur)
            return (occur);
    }
    throw std::exception();
}
