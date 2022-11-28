/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:24:23 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 16:23:53 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
    A_Animal* test;
    Dog dog;
    Cat cat;

    dog.makeSound();
    std::cout << "\n=================\n";
    cat.makeSound();
    std::cout << "\n=================\n";
    test = new Dog;
    std::cout << test->getType() << "\n=================\n";
    test->makeSound();
    std::cout << "\n=================\n";
    delete test;
    return (0);
}