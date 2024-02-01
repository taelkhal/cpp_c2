/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:05:45 by taelkhal          #+#    #+#             */
/*   Updated: 2024/02/01 18:35:28 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP


#include <iostream>

template <typename T>

void ft_print(T &a)
{
    std::cout << a << std::endl;
}

template <typename T>

void iter(T *array, size_t length, void (*f)(const T&))
{
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}

#endif