/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:08:41 by taelkhal          #+#    #+#             */
/*   Updated: 2024/02/08 17:51:48 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> arr(5);

    arr.push_back(-4);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(3);
    easyfind(arr, 0);
    easyfind(arr, 99);
    easyfind(arr, 3);
    easyfind(arr, -4);
}