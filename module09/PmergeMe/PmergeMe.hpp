#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

double  mergeInsertSort(int ac, char **av);

template <typename T>
void    insertSort(T& container) {
    int k, j;

    for (size_t i = 1; i < container.size(); i++) {
        k = container[i];
        j = i - 1;
        while (j >= 0 && k < container[j]) {
            container[j + 1] = container[j];
            j--;
        }
        container[j + 1] = k;
    }
}

template <typename T>
void    merge(T& container, T& left, T& right) {
    container.clear();
    while (left.size() > 0 && right.size() > 0) {
        if (left[0] < right[0]) {
            container.push_back(left[0]);
            left.erase(left.begin());
        }
        else {
            container.push_back(right[0]);
            right.erase(right.begin());
        }
    }
    while (left.size() > 0) {
        container.push_back(left[0]);
        left.erase(left.begin());
    }
    while (right.size() > 0) {
        container.push_back(right[0]);
        right.erase(right.begin());
    }
}

template <typename T>
void    sort(T& container) {
    if (container.size() <= 3)
        return insertSort(container);
    T left(container.begin(), container.begin() + container.size() / 2);
    T right(container.begin() + container.size() / 2, container.end());
    sort(left);
    sort(right);
    merge(container, left, right);
}

template <typename T>
void    printv(T container) {
    for (size_t i = 0; i < container.size(); i++) {
        std::cout << container[i] << " ";
    }
    std::cout << std::endl;
}

#endif