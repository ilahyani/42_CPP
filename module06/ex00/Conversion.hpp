/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:30:18 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/03 14:37:05 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <exception>

class Conversion
{
    char    *data;
    char    type;
    double  D;
    float   F;
    int     I;
    char    C;
    public:
        Conversion();
        Conversion(char *str);
        ~Conversion();
        const char& getType();
        double  getD();
        int     getF();
        float   getI();
        char    getC();
        void    convertData();
        void    printData();
        bool    is_char(char *str);
        bool    is_int(char *str);
        bool    is_float(char *str);
        bool    is_double(char *str);
        class UnknownType : public std::exception {
            virtual const char* what() const throw();
        };
};

#endif