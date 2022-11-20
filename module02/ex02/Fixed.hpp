/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:57:24 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/20 12:10:16 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

#define OFFSET pow(2, 8)

class Fixed
{
    static const int bit_nbr;
    int value;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        Fixed(const int x);
        Fixed(const float f);
        ~Fixed();
        static const Fixed&    min(const Fixed& obj1, const Fixed& obj2);
        static const Fixed&    max(const Fixed& obj1, const Fixed& obj2);
        static Fixed&    max(Fixed& obj1, Fixed& obj2);
        static Fixed&    min(Fixed& obj1, Fixed& obj2);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        bool    operator>(const Fixed& other);
        bool    operator<(const Fixed& other);
        bool    operator>=(const Fixed& other);
        bool    operator<=(const Fixed& other);
        bool    operator==(const Fixed& other);
        bool    operator!=(const Fixed& other);
        Fixed&  operator=(const Fixed& other);
        Fixed   operator+(const Fixed& other);
        Fixed   operator-(const Fixed& other);
        Fixed   operator*(const Fixed& other);
        Fixed   operator/(const Fixed& other);
        Fixed   operator++();
        Fixed   operator--();
        Fixed   operator++(int);
        Fixed   operator--(int);
};

std::ostream&   operator<<(std::ostream& stream, const Fixed& other);

#endif