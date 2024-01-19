/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:16:32 by taelkhal          #+#    #+#             */
/*   Updated: 2024/01/14 16:05:31 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("b", 151);
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        {
        Bureaucrat b2("b2", 3);
        std::cout << b2;
        b2.incrementGrade();
        std::cout << b2;
        b2.incrementGrade();
        std::cout << b2;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}