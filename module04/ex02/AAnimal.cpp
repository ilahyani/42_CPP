/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:21:58 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 12:26:17 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

AAnimal::AAnimal() {
    std::cout << "AAnimal Default constructor called\n";
}

AAnimal::AAnimal(const AAnimal& copy) {
    std::cout << "AAnimal Copy constructor called\n";
    *this = copy;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal Default desctructor called\n";
}

const std::string&   AAnimal::getType(void) {
    return (type);
} 

AAnimal& AAnimal::operator=(const AAnimal& other) {
    type = other.type;
    return (*this);
}