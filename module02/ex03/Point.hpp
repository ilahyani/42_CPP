/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:57:07 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/20 14:41:58 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

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
        void    getX(void);
        void    getY(void);
};

#endif