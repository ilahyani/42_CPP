/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:36:34 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/27 11:36:35 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
    std::cout << "WrongAnimal Copy constructor called\n";
    *this = copy;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Default desctructor called\n";
}

const std::string&   WrongAnimal::getType(void) {
    return (type);
}

void WrongAnimal::makeSound(void) {
    std::cout << "[RELEVENT Animal SOUND]\n";
} 

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    type = other.type;
    return (*this);
}