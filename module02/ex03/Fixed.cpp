/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:57:21 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/22 15:19:19 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit_nbr = 8;

Fixed::Fixed() {
    value = 0;
}

Fixed::Fixed(const Fixed& copy) {
    *this = copy;
}

Fixed::Fixed(const int x) {
    value = x * (OFFSET);
}

Fixed::Fixed(const float f) {
	value = roundf(f * (float)(OFFSET));
}

Fixed::~Fixed() {}

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

Fixed&    Fixed::min(Fixed& obj1, Fixed& obj2) {
    return (obj1.getRawBits() < obj2.getRawBits() ? obj1 : obj2);
}

const Fixed&    Fixed::min(const Fixed& obj1, const Fixed& obj2) {
    return (obj1.getRawBits() < obj2.getRawBits() ? obj1 : obj2);
}

Fixed&    Fixed::max(Fixed& obj1, Fixed& obj2) {
    return (obj1.getRawBits() > obj2.getRawBits() ? obj1 : obj2);
}

const Fixed&    Fixed::max(const Fixed& obj1, const Fixed& obj2) {
    return (obj1.getRawBits() > obj2.getRawBits() ? obj1 : obj2);
}

Fixed&  Fixed::operator=(const Fixed& other) {
    this->value = other.getRawBits();
    return (*this);
}

bool    Fixed::operator>(const Fixed& other) {
    return (this->value > other.getRawBits() ? true : false);
}

bool    Fixed::operator<(const Fixed& other) {
    return (this->value < other.getRawBits() ? true : false);
}

bool    Fixed::operator>=(const Fixed& other) {
    return (this->value >= other.getRawBits() ? true : false);
}

bool    Fixed::operator<=(const Fixed& other) {
    return (this->value <= other.getRawBits() ? true : false);
}

bool    Fixed::operator==(const Fixed& other) {
    return (this->value == other.getRawBits() ? true : false);
}

bool    Fixed::operator!=(const Fixed& other) {
    return (this->value != other.getRawBits() ? true : false);
}

Fixed   Fixed::operator+(const Fixed& other) {
    return (this->toFloat() + other.toFloat());
}

Fixed   Fixed::operator-(const Fixed& other) {
    return (this->toFloat() - other.toFloat());
}

Fixed   Fixed::operator*(const Fixed& other) {
    return (this->toFloat() * other.toFloat());
}

Fixed   Fixed::operator/(const Fixed& other) {
    return (this->toFloat() / other.toFloat());
}

Fixed   Fixed::operator++() {
    value++;
    return (*this);
}

Fixed   Fixed::operator--() {
    value--;
    return (*this);
}

Fixed   Fixed::operator++(int) {
    Fixed   tmp(toFloat());
    
    value++;
    return (tmp);
}

Fixed   Fixed::operator--(int) {
    Fixed   tmp(toFloat());

    value++;
    return (tmp);
}

std::ostream&   operator<<(std::ostream& stream, const Fixed& other) {
    stream << other.toFloat();
    return (stream);
}