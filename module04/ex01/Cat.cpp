/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:33 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 15:38:54 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat Default constructor called\n";
    type = "Cat";
    brain = new Brain;
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat Copy constructor called\n";
    *this = copy;
}

Cat::~Cat() {
    std::cout << "Cat Default desctructor called\n";
    delete brain;
}

Cat& Cat::operator=(const Cat& other) {
    type = other.type;
    delete brain;
    brain = new Brain(*other.brain);
    return (*this);
}

const std::string& Cat::getType(void) {
    return (type);
}

void    Cat::makeSound(void) {
    std::cout << "Bark!!";
}

void Cat::getBrainAddress(void) {
    std::cout << "Cat brain address: " << brain << "\n";
}