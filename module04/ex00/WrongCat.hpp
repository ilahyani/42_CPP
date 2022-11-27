/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:25:38 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/27 11:36:28 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& copy);
        ~WrongCat();
        WrongCat& operator=(const WrongCat& other);
        const std::string& getType(void);
        void makeSound(void);
};

#endif