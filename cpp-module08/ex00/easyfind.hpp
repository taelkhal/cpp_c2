/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:02:32 by taelkhal          #+#    #+#             */
/*   Updated: 2024/02/08 17:26:28 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T>

void easyfind(T &arr, int nb)
{
    typename T::iterator i;
    int index = -1;

    for (i = arr.begin(); i != arr.end(); i++)
    {
        index++;
        if (*i == nb)
        {
            std::cout << nb << " found in index " << index << std::endl;
            break ;
        }
    }
    if (i == arr.end())
        std::cout << nb << " not found" << std::endl;
}


#endif