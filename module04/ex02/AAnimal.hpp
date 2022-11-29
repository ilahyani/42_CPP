/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:19:28 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 15:40:25 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal& copy);
        virtual ~AAnimal();
        AAnimal& operator=(const AAnimal& other);
        const std::string& getType(void);
        virtual void makeSound(void) = 0;
};

#endif