/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:26:35 by ilahyani          #+#    #+#             */
/*   Updated: 2022/10/31 17:09:07 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    std::string name;
    Weapon      *weapon;
    public:
        HumanB(std::string newName);
        ~HumanB();
        void    attack(void);
        void    setWeapon(Weapon& NewWeapon);
};

#endif