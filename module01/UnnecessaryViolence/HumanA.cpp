/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:26:59 by ilahyani          #+#    #+#             */
/*   Updated: 2022/10/31 16:25:47 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string NewName, Weapon& NewWeapon)
    : weapon(NewWeapon)
{
    weapon = NewWeapon;
    name = NewName;
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
}