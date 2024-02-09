/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:36:39 by taelkhal          #+#    #+#             */
/*   Updated: 2024/02/09 18:52:47 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():N(0)
{
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(Span const &other)
{
    *this = other;
}

Span &Span::operator=(Span const &other)
{
    this->N = other.N;
    this->arr = other.arr;
    return *this;
}

Span::~Span()
{
}


void Span::addNumber(unsigned int N)
{
    if (arr.size() < this->N)
    {
        if (std::find(arr.begin(), arr.end(), N) != arr.end())
            throw ErrorDuplicate();
        else
            arr.push_back(N);
    }
}

int Span::shortestSpan()
{
    std::vector<int>::iterator shortestspan;
    
    if (arr.empty() || arr.size() == 1)
        throw ErrorSpan();
    shortestspan = std::min_element(arr.begin(), arr.end());
    return *shortestspan;
}

int Span::longestSpan()
{
    std::vector<int>::iterator longestspan;
    
    if (arr.empty() || arr.size() == 1)
        throw ErrorSpan();
    int a = std::max_element(arr.begin(), arr.end()) - std::min_element(arr.begin(), arr.end());
    return a;
}