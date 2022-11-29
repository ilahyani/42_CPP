/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:38 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 11:07:46 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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