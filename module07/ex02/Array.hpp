/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:40:05 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/04 14:14:01 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template<typename T>
class Array
{
    T *tab;
    unsigned int len;
    public:
        Array() {
            tab = 0;
            len = 0;
        }
        Array(unsigned int n) : len(n) {
            tab = new T[len];
            for (unsigned int i = 0; i < len; i++)
                tab[i] = 0;
        }
        Array(Array &copy) {
            *this = copy;
        }
        Array& operator=(Array& other) {
            len = other.len;
            tab = new T[other.len];
            for (unsigned int i = 0; i < len; i++)
                tab[i] = other.tab[i];
            return (*this);
        }
        T&  operator[](unsigned int idx) {
            if (idx < 0 || idx > len)
                throw (OutOfBound());
            return (tab[idx]);
        }
        class OutOfBound: public std::exception {
            virtual const char* what() const throw() {
                return ("Element out of bond\n");
            }
        };
        unsigned int size(void) const {
            return (len);
        }
};

#endif