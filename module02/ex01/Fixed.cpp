/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:57:21 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/13 17:33:21 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constractor called\n";
    value = 0;
}

Fixed::Fixed(const Fixed& copy) {
    std::cout << "Copy constractor called\n";
    value = copy.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

void    Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called\n";
    this->value = other.getRawBits();
}

int     Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return (value);
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called\n";
    value = raw;
}