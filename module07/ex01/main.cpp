/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 09:50:16 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/04 10:45:33 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template< typename T >
void print(const T& x) {
    std::cout << x << "\n";
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 999};

    iter(arr, 7, print);
    return 0;
}