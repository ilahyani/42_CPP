/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:19:28 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 15:40:25 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_Animal_HPP
#define A_Animal_HPP

#include <iostream>
#include <string>

class A_Animal {
    protected:
        std::string type;
    public:
        A_Animal();
        A_Animal(const A_Animal& copy);
        virtual ~A_Animal();
        A_Animal& operator=(const A_Animal& other);
        const std::string& getType(void);
        virtual void makeSound(void) = 0;
};

#endif