/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:57:05 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/20 14:46:33 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point::Point(const Point& copy) {
    *this = copy;
}

Point&  Point::operator=(const Point& copy) {}

Point::~Point() {}