/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:24:51 by ilahyani          #+#    #+#             */
/*   Updated: 2023/03/19 18:59:24 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    is_number(std::string value)
{
    bool isFloat = false;

    for (size_t i = 0; i < value.size(); i++) {
        if (value[i] == '.') {
            if (isFloat)
                return false;
            isFloat = true;
        }
        else if (value[i] < '0' || value[i] > '9')
            if (i != 0 && (value[i] != '-' || value[i] != '+'))
                return false;
    }
    return true;
}

double  mergeInsertSort(int ac, char **av) {
    std::vector<int> v;
    std::deque<int> d;

    for (int i = 1; i < ac; i++) {
        if (!is_number(av[i]) || atoi(av[i]) < 0)
            return (std::cerr << "Error" << std::endl, 1);
        v.push_back(atoi(av[i]));
        d.push_back(atoi(av[i]));
    }
    std::cout << "Before:   ";
    printv(v);
    clock_t start = clock();
    sort(v);
    clock_t end = clock();
    std::cout << "After:    ";
    printv(v);
    std::cout << "Time to process a range of " <<  ac - 1 << " elements with std::vector : "
        << std::fixed << (double)(end - start) / CLOCKS_PER_SEC << " sec\n";
    start = clock();
    sort(d);
    end = clock();
    std::cout << "Time to process a range of " <<  ac - 1 << " elements with std::deque : "
        << std::fixed << (double)(end - start) / CLOCKS_PER_SEC << " sec\n";
    return 0;
}