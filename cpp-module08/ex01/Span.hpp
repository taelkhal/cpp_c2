/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:24:11 by taelkhal          #+#    #+#             */
/*   Updated: 2024/02/09 18:47:06 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private:
    	unsigned int N;
    	std::vector<int> arr;
    public:
    	Span();
    	Span(unsigned int N);
    	Span(Span const &other);
    	Span &operator=(Span const &other);
    	~Span();
    	void addNumber(unsigned int N);
		class ErrorDuplicate: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Found Duplicated Number");
				}
		};
		int shortestSpan();
		int longestSpan();
		class ErrorSpan: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("No Number Or Found Just One Number");
				}
		};
};


#endif