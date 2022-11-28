/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:36 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 16:10:38 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
    Brain* brain;
    public:
        Dog();
        Dog(const Dog& copy);
        virtual ~Dog();
        Dog& operator=(const Dog& other);
        const std::string& getType(void);
        void makeSound(void);
        void getBrainAddress(void);
};

#endif