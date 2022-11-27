/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:36 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/27 11:05:45 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
    public:
        Dog();
        Dog(const Dog& copy);
        ~Dog();
        Dog& operator=(const Dog& other);
        const std::string& getType(void);
        virtual void makeSound(void);
};

#endif