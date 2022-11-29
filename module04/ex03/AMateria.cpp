/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:31:44 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 10:12:35 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria default constructor called\n";
}

AMateria::AMateria(std::string const& type) {
    std::cout << "AMateria string constructor called\n";
    this->type = type;
}

AMateria::AMateria(const AMateria& copy) {
    std::cout << "AMateria copy constructor called\n";
    *this = copy;
}

AMateria::~AMateria() {
    std::cout << "AMateria default destructor called\n";
}

AMateria& AMateria::operator=(const AMateria& other) {
    type = other.type;
    return (*this);
}

AMateria::~AMateria() {
    std::cout << "AMateria default destructor called\n";
}

std::string const& AMateria::getType() const {
    return (type);
}
