/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:21:58 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 12:26:17 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

A_Animal::A_Animal() {
    std::cout << "A_Animal Default constructor called\n";
}

A_Animal::A_Animal(const A_Animal& copy) {
    std::cout << "A_Animal Copy constructor called\n";
    *this = copy;
}

A_Animal::~A_Animal() {
    std::cout << "A_Animal Default desctructor called\n";
}

const std::string&   A_Animal::getType(void) {
    return (type);
}

void A_Animal::makeSound(void) {
    std::cout << "[RELEVENT A_Animal SOUND]\n";
} 

A_Animal& A_Animal::operator=(const A_Animal& other) {
    type = other.type;
    return (*this);
}