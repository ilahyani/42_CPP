/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:30:03 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/22 18:17:26 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed   A;
    Fixed   A1, A2, A3;

    if (point == a || point == b || point == c)
        return (false);
    A = (a.getX() * (b.getY() - c.getY())
        + b.getX() * (c.getY() - a.getY())
        + c.getX() * (a.getY() - b.getY())) / 2;
    A1 = (a.getX() * (point.getY() - c.getY())
        + point.getX() * (c.getY() - a.getY())
        + c.getX() * (a.getY() - point.getY())) / 2;
    A2 = (a.getX() * (b.getY() - point.getY())
        + b.getX() * (point.getY() - a.getY())
        + point.getX() * (a.getY() - b.getY())) / 2;
    A3 = (point.getX() * (b.getY() - c.getY())
        + b.getX() * (c.getY() - point.getY())
        + c.getX() * (point.getY() - b.getY())) / 2;
    if (A1 == 0 || A2 == 0 || A3 == 0)
        return (false);
    if (abs(A.getRawBits())
        == abs(A1.getRawBits()) + abs(A2.getRawBits()) + abs(A3.getRawBits()))
            return (true);
    return (false);
}