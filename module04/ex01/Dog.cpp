/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:34 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 15:38:56 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog Default constructor called\n";
    type = "Dog";
    brain = new Brain;
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog Copy constructor called\n";
    *this = copy;
}

Dog::~Dog() {
    std::cout << "Dog Default desctructor called\n";
    delete brain;
}

Dog& Dog::operator=(const Dog& other) {
    type = other.type;
    delete brain;
    brain = new Brain(*other.brain);
    return (*this);
}

const std::string& Dog::getType(void) {
    return (type);
}

void    Dog::makeSound(void) {
    std::cout << "Bark!!";
}

void Dog::getBrainAddress(void) {
    std::cout << "Dog brain address: " << brain << "\n";
}
