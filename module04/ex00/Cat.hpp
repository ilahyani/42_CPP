/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:38 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/27 11:05:49 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
    public:
        Cat();
        Cat(const Cat& copy);
        ~Cat();
        Cat& operator=(const Cat& other);
        const std::string& getType(void);
        virtual void makeSound(void);
};

#endif