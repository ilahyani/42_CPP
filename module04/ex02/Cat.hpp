/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:38 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 16:10:38 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
    Brain* brain;
    public:
        Cat();
        Cat(const Cat& copy);
        virtual ~Cat();
        Cat& operator=(const Cat& other);
        const std::string& getType(void);
        void makeSound(void);
        void getBrainAddress(void);
};

#endif