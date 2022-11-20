/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:57:21 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/20 10:06:33 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit_nbr = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called\n";
    value = 0;
}

Fixed::Fixed(const Fixed& copy) {
    std::cout << "Copy constructor called\n";
    *this = copy;
}

Fixed::Fixed(const int x) {
	std::cout << "Int constructor called" << std::endl;
    value = x * (OFFSET);
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	value = roundf(f * (OFFSET));
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

int     Fixed::getRawBits(void) const {
    return (value);
}

void    Fixed::setRawBits(int const raw) {
    value = raw;
}

float   Fixed::toFloat(void) const {
    return ((float)getRawBits() / (float)(OFFSET));      
}

int     Fixed::toInt(void) const {
    return (getRawBits() / (OFFSET));
}

Fixed&  Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called\n";
    this->value = other.getRawBits();
}

std::ostream&   operator<<(std::ostream& stream, const Fixed& other) {
    stream << other.toFloat();
    return (stream);
}