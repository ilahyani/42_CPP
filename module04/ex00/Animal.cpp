/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:21:58 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/27 11:37:38 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

Animal::Animal() {
    std::cout << "Animal Default constructor called\n";
}

Animal::Animal(const Animal& copy) {
    std::cout << "Animal Copy constructor called\n";
    *this = copy;
}

Animal::~Animal() {
    std::cout << "Animal Default desctructor called\n";
}

const std::string&   Animal::getType(void) {
    return (type);
}

void Animal::makeSound(void) {
    std::cout << "[RELEVENT ANIMAL SOUND]\n";
} 

Animal& Animal::operator=(const Animal& other) {
    type = other.type;
    return (*this);
}