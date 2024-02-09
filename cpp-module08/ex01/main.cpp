/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:19:05 by taelkhal          #+#    #+#             */
/*   Updated: 2024/02/09 18:52:10 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try{
        Span a(5);
    
        a.addNumber(6);
        a.addNumber(3);
        a.addNumber(17);
        a.addNumber(9);
        a.addNumber(11);
    
        // std::cout << a.shortestSpan() << std::endl;
        std::cout << a.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}