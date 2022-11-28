/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:24:12 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 18:40:46 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
    std::cout << "Cure default constructor called\n";
    type = "cure";
}

Cure::Cure(std::string const& type) {
    std::cout << "Cure string constructor called\n";
    this->type = type;
}

Cure::Cure(const Cure& copy) {
    std::cout << "Cure copy constructor called\n";
    *this = copy;
}

Cure::~Cure() {
    std::cout << "Cure default destructor called\n";
}

Cure& Cure::operator=(const Cure& other) {
    type = other.type;
    return (*this);
}

AMateria* Cure::clone() const {
    return (new Cure);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << " 's wounds *";
}