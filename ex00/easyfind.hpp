/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:13:31 by macbook           #+#    #+#             */
/*   Updated: 2023/10/24 00:27:26 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <typename T>
bool easyfind(T &container, int occur)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), occur);
    return (it != container.end());
}
