/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:57:07 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/22 15:03:08 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
class Point
{
    const Fixed x;
    const Fixed y;
    public:
        Point();
        Point(const float a, const float b);
        Point(const Point& copy);
        ~Point();
        Point&  operator=(const Point& copy);
        bool    operator==(const Point& other) const;
        Fixed   getX(void) const;
        Fixed   getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif