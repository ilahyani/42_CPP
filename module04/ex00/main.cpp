/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:24:23 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/27 11:40:38 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    WrongAnimal* k = new WrongCat();

    std::cout << j->getType() << ": ";
    j->makeSound();
    std::cout << std::endl;
    std::cout << i->getType() << ": ";
    i->makeSound();
    std::cout << std::endl;
    meta->makeSound();
    std::cout << k->getType() << ": ";
    k->makeSound();
    return (0);
}