/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:31:20 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/04 19:05:54 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <array>
#include <stack>

int main(void) {
    std::vector<int> vec;
    std::deque<int> deq;
    int x;

    vec.push_back(69);
    vec.push_back(37);
    vec.push_back(13);
    vec.push_back(42);
    vec.push_back(1337);
    deq.push_back(69);
    deq.push_back(37);
    deq.push_back(13);
    deq.push_back(42);
    deq.push_back(1337);
    x = easyfind< std::vector<int> >(vec, 1337);
    if (x == -1)
        std::cout << "Element not found\n";
    else
        std::cout << x << "\n";
    return (0);
}