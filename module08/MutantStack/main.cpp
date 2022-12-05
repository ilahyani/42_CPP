/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:29:01 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/05 10:43:30 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    }
    catch (std::exception &e) {
        std::cout << e.what();
    }
    sp.printSpan();
    try {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what();
    }
    std::cout << "-----------------------------------\n";
    Span prrr(100);

    try {
        prrr.fillSpan();
    }
    catch (std::exception &e) {
        std::cout << e.what();
    }
    prrr.printSpan();
    try {
        std::cout << prrr.shortestSpan() << std::endl;
        std::cout << prrr.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what();
    }
    return 0;
}