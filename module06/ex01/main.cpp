/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:50:17 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/03 17:41:49 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct t_Data
{
    int x;
    int y;
}   Data;

uintptr_t serialize(Data* ptr) {
    uintptr_t a;

    a = reinterpret_cast<uintptr_t>(ptr);
    return (a);
}

Data* deserialize(uintptr_t raw) {
    Data *a;

    a = reinterpret_cast<Data*>(raw);
    return (a);
}

int main() {
    Data    *p1 = new Data;
    Data    *p2 = NULL;

    p1->x = 69;
    p1->y = 111;
    std::cout << p1->x << " " << p1->y << "\n";
    p2 = deserialize(serialize(p1));
    std::cout << p2->x << " " << p2->y << "\n";
    delete p1;
    return 0;
}