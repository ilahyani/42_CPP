/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:30:14 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/03 14:46:59 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::Conversion(char *str) {
    if (is_char(str))
        type = 'C';
    else if (is_int(str))
        type = 'I';
    else if (is_double(str))
        type = 'D';
    else if (is_float(str))
        type = 'F';
    else
        throw (UnknownType());
    data = str;
}

Conversion::~Conversion() {}

const char& Conversion::getType() {
    return (type);
}

void    Conversion::convertData() {
    if (type == 'C') {
        C = data[0];
        I = static_cast<int>(C);
        D = static_cast<double>(I);
        F = static_cast<float>(I);
    }
    else if (type == 'I') {
        I = atoi(data);
        C = static_cast<char>(I);
        D = static_cast<double>(I);
        F = static_cast<float>(I);
    }
    else if (type == 'F') {
        F = strtof(data, NULL);
        I = static_cast<int>(F);
        C = static_cast<char>(F);
        D = static_cast<double>(F);
    }
    else if (type == 'D') {
        D = strtod(data, NULL);
        I = static_cast<int>(D);
        C = static_cast<char>(D);
        F = static_cast<double>(D);
    }
}

void    Conversion::printData() {
    if (I == INT_MIN) {
        std::cout << "Char: impossible\n";
        std::cout << "Int: impossible\n";
    }
    else {
        if (!isprint(C))
            std::cout << "Char: Non displayable\n";
        else
            std::cout << "Char: '" << C << "'\n";
        std::cout << "Int: " << I << "\n";
    }
    std::cout << "Float: " << std::fixed << std::setprecision(1) << F << "f\n";
    std::cout << "Double: " << std::fixed << std::setprecision(1) << D << "\n";
}

bool    Conversion::is_char(char *str)
{
    if (!isdigit(str[0]) && !str[1])
        return true;
    return false;
}

bool    Conversion::is_int(char *str)
{
    int i = 0;

    while (str[i] && isdigit(str[i]))
        i++;
    if (!str[i])
        return true;
    return false;
}

bool    Conversion::is_double(char *str)
{
    int i = 0;
    int onePoint = 0;

    if (!strncmp(str, "-inf", strlen(str))
        || !strncmp(str, "+inf", strlen(str))
        || !strncmp(str, "nan", strlen(str)))
        return true;
    while (str[i] && (isdigit(str[i])))
    {
        if (str[i + 1] == '.') {
            if (onePoint == 0) {
                onePoint++;
                i++;
            }
            else
                return false;
        }
        i++;
    }
    if (!str[i])
        return true;
    return false;
}

bool    Conversion::is_float(char *str)
{
    int i = 0;
    int onePoint = 0;

    if (!strncmp(str, "-inff", strlen(str))
        || !strncmp(str, "+inff", strlen(str))
        || !strncmp(str, "nanf", strlen(str)))
        return true;
    while (str[i] && (isdigit(str[i])))
    {
        if (str[i + 1] == '.') {
            if (onePoint == 0) {
                onePoint++;
                i++;
            }
            else
                return false;
        }
        i++;
    }
    if (str[i] == 'f' && !str[i + 1])
        return true;
    return false;
}

const char* Conversion::UnknownType::what() const throw() {
    return ("Error: Unkown Type\n");
}