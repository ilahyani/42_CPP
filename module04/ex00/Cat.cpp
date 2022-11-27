/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:33 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/27 11:05:54 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat Default constructor called\n";
    type = "Cat";
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat Copy constructor called\n";
    *this = copy;
}

Cat::~Cat() {
    std::cout << "Cat Default desctructor called\n";
}

Cat& Cat::operator=(const Cat& other) {
    type = other.type;
    return (*this);
}

const std::string&   Cat::getType(void) {
    return (type);
}

void    Cat::makeSound(void) {
    std::cout << "Meow!!";
}