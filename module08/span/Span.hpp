/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:28:56 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/05 10:31:20 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <ctime>
#include <cstdlib>

class Span
{
    unsigned int len;
    std::vector<int> span;
    public:
        ~Span();
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& other);
        std::vector<int> getSpan(void) const;
        unsigned int getLen(void) const;
        void addNumber(int x);
        void fillSpan(void);
        int shortestSpan(void);
        int longestSpan(void);
        void printSpan(void);
        class SpanFull : public std::exception
        {
            virtual const char* what() const throw();  
        };
        class NoSpanFound : public std::exception
        {
            virtual const char* what() const throw();  
        };
};

#endif