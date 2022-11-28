/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:24:23 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 15:51:19 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
    Animal* tab[10];
    Dog basic_dog;
    Dog tmp_dog = basic_dog;
    Cat basic_cat;
    Cat tmp_cat = basic_cat;

    basic_dog.getBrainAddress();
    tmp_dog.getBrainAddress();
    basic_cat.getBrainAddress();
    tmp_cat.getBrainAddress();
    std::cout << "==================================================\n";
    for (int i = 0; i < 10; i++)
        i < 5 ? tab[i] = new Dog : tab[i] = new Cat;
    std::cout << "==================================================\n";
    for (int i = 0; i < 10; i++) {
        std::cout << tab[i]->getType() << std::endl;
        delete tab[i];
    }
    std::cout << "==================================================\n";
    return (0);
}