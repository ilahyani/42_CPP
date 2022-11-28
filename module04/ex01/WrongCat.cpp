/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:36:36 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/27 11:36:38 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat Default constructor called\n";
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) {
    std::cout << "WrongCat Copy constructor called\n";
    *this = copy;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Default desctructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    type = other.type;
    return (*this);
}

const std::string&   WrongCat::getType(void) {
    return (type);
}

void    WrongCat::makeSound(void) {
    std::cout << "Meow!!";
}