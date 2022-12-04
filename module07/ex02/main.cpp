/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:47:11 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/04 14:16:35 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define T char

int main() {

    Array<T> y;
    Array<T> x(10);

    for (int i = 0; i < 10; i++)
        x[i] = (i + 65);
    std::cout << "[Original Array]: ";
    for (int i = 0; i < 10; i++)
        std::cout << x[i] << " ";

    std::cout << "\n[Assignemet Operator Test]: ";
    Array<T> z = x;
    for (int i = 0; i < 10; i++)
        std::cout << z[i] << " ";

    std::cout << "\n[Copy Constructor Test]: ";
    Array<T> k(z);
    for (int i = 0; i < 10; i++)
        std::cout << k[i] << " ";

    std::cout << "\n[Deep Copy Test Test]: ";
    for (int i = 0; i < 10; i++)
        x[i] = (i + 97);
    std::cout << "\n[Original Array]: ";
    for (int i = 0; i < 10; i++)
        std::cout << x[i] << " ";
    std::cout << "\n[Assigned Array]: ";
    for (int i = 0; i < 10; i++)
        std::cout << z[i] << " ";
    std::cout << "\n[Copied Array]:   ";
    for (int i = 0; i < 10; i++)
        std::cout << k[i] << " ";
    std::cout << "\n";

    try {
        std::cout << k[1000000] << "\n";
    }
    catch (std::exception& e) {
        std::cout << e.what();
    }
    try {
        std::cout << z[-5] << "\n";
    }
    catch (std::exception& e) {
        std::cout << e.what();
    }
    try {
        std::cout << x[11] << "\n";
    }
    catch (std::exception& e) {
        std::cout << e.what();
    }

    std::cout << y.size() << "\n";
    std::cout << x.size() << "\n";
    std::cout << z.size() << "\n";
    std::cout << k.size() << "\n";
    return (0);
}