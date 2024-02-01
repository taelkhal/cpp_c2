/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:24:47 by taelkhal          #+#    #+#             */
/*   Updated: 2024/02/01 16:59:46 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>


template <typename T>

void swap(T &a, T &b)
{
    T swp;

    swp = a;
    a = b;
    b = swp;
}

template <typename T>
T min(T a, T b)
{
    if (a > b)
        return b;
    else
        return a;
}

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

#endif