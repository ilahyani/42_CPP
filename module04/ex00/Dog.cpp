/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:34 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/27 11:05:58 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog Default constructor called\n";
    type = "Dog";
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog Copy constructor called\n";
    *this = copy;
}

Dog::~Dog() {
    std::cout << "Dog Default desctructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
    type = other.type;
    return (*this);
}

const std::string& Dog::getType(void) {
    return (type);
}

void    Dog::makeSound(void) {
    std::cout << "Bark!!";
}