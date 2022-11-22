/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:57:18 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/22 15:04:45 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
    const Point a(0.0, 0.0);
    const Point b(10.0, 30.0);
    const Point c(20.0, 0.0);
    const Point p(10.0, 15.0);
    // const Point p(0.0, 0.0);
    // const Point p(30.0, 15.0);

    if (bsp(a, b, c, p))
        std::cout <<"Inside\n";
    else
        std::cout <<"Outside\n";
    return (0);
}