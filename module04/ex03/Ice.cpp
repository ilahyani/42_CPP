/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:24:17 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 18:41:33 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
    std::cout << "Ice default constructor called\n";
    type = "ice";
}

Ice::Ice(std::string const& type) {
    std::cout << "Ice string constructor called\n";
    this->type = type;
}

Ice::Ice(const Ice& copy) {
    std::cout << "Ice copy constructor called\n";
    *this = copy;
}

Ice::~Ice() {
    std::cout << "Ice default destructor called\n";
}

Ice& Ice::operator=(const Ice& other) {
    type = other.type;
    return (*this);
}

AMateria* Ice::clone() const {
    return (new Ice);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}