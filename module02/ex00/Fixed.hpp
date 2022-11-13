/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:57:24 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/13 17:29:38 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    static const int bit_nbr = 8;
    int value;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        ~Fixed();
        void    operator=(const Fixed& other);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif