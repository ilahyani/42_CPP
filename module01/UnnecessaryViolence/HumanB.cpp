/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:26:39 by ilahyani          #+#    #+#             */
/*   Updated: 2022/10/31 16:31:49 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string NewName)
{
    name = NewName;
    weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::attack(void) {
    std::cout << name << " attacks with their ";
    if (weapon)
        std::cout << weapon->getType() << "\n";
}

void    HumanB::setWeapon(Weapon& NewWeapon) {
    weapon = &NewWeapon;
}