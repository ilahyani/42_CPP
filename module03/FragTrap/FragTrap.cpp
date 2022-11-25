/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:52:49 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/25 10:29:01 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap Default Constructor Called\n";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str) {
    std::cout << "FragTrap String Constructor Called\n";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Default Destructor Called\n";
}

void FragTrap::highFivesGuys(void) {
    std::cout << "I request the highest of fives\n";
}

void    FragTrap::attack(const std::string& target) {
    if (HitPoints && EnergyPoints) {
        std::cout << "FragTrap " << name << " attacks " << target
            << " causing " << AttackDamage <<  " points of damage!\n";
        EnergyPoints--;
        if (EnergyPoints < 0)
            EnergyPoints = 0;
    }
    if (!HitPoints)
        std::cout << name << " Can't attack, no HitPoints left\n";
    else if (!EnergyPoints)
        std::cout << name << " Can't attack, no EnergyPoints left\n";
    std::cout << HitPoints << " HitPoints left | ";
    std::cout << EnergyPoints << " EnergyPoints left\n";
}