/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:36 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 11:07:46 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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