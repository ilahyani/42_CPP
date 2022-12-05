/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:28:59 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/05 10:41:33 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span() {}

Span::Span() {}

Span::Span(unsigned int N) : len(N) {}

Span::Span(const Span& copy) {
    *this = copy;
}

Span&   Span::operator=(const Span& other) {
    len = other.getLen();
    span = other.getSpan();
    return (*this);
}

std::vector<int> Span::getSpan(void) const {
    return (span);
}

unsigned int Span::getLen(void) const {
    return (len);
}

void    Span::addNumber(int x) {
    if (span.size() == len) {
        throw (Span::SpanFull());
    }
    span.push_back(x);
}

int Span::shortestSpan(void) {
    int x = INT_MAX;

    if (span.empty() || span.size() == 1)
        throw (Span::NoSpanFound());
    std::vector<int> tmp = span;
    std::sort(tmp.begin(), tmp.end());
    for (size_t i = 0; i < tmp.size() - 1; i++)
        if (tmp[i + 1] - tmp[i] < x)
            x = tmp[i + 1] - tmp[i];
    return (x);
}

int Span::longestSpan(void) {
    if (span.empty() || span.size() == 1)
        throw (Span::NoSpanFound());
    return (*std::max_element(span.begin(), span.end()) - *std::min_element(span.begin(), span.end()));
}

int RandomNumGenerator() {
    return (rand() % 100);
}

void Span::fillSpan(void) {
    if (!span.empty())
        throw (Span::SpanFull());
    span.resize(len);
    srand(time(NULL));
    std::generate(span.begin(), span.end(), RandomNumGenerator);
}

void    Span::printSpan(void) {
    std::vector<int>::iterator it;

    if (span.empty()) {
        std::cout << "Span is Empty\n";
        return ;
    }
    for (it = span.begin(); it != span.end(); it++)
        std::cout << *it << " ";
    std::cout << "\n";
    
}

const char* Span::SpanFull::what() const throw() {
    return ("Span is full already\n");
}

const char* Span::NoSpanFound::what() const throw() {
    return ("No span found\n");
}