/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:57:05 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/22 15:03:10 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point::Point(const Point& copy) {
    *this = copy;
}

Point&  Point::operator=(const Point& other) {
    this->~Point();
    new (this) Point(other.getX().toFloat(), other.getY().toFloat());
    return (*this);
}

bool    Point::operator==(const Point& other) const {
    return (this->getX() == other.getX()
        && this->getY() == other.getY() ? true : false);
}

Fixed   Point::getX(void) const {
    return (x);
}

Fixed   Point::getY(void) const {
    return (y);
}

Point::~Point() {}