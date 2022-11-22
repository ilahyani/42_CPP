/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:26:59 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/22 18:24:50 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string NewName, Weapon& NewWeapon)
    : name(NewName), weapon(NewWeapon) {}

HumanA::~HumanA() {}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
}