/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:57:24 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/20 12:11:28 by ilahyani         ###   ########.fr       */
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
        Fixed&  operator=(const Fixed& other);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream&   operator<<(std::ostream& stream, const Fixed& other);

#endif