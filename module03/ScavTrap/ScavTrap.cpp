/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:43:20 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/25 18:40:40 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default Constructor Called\n";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str) {
    std::cout << "ScavTrap String Constructor Called\n";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Default Destructor Called\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    EnergyPoints = other.EnergyPoints;
    HitPoints = other.HitPoints;
    AttackDamage = other.AttackDamage;
    name = other.name;
    return (*this);
}

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap is now in Gatekeeper mode\n";
}

void    ScavTrap::attack(const std::string& target) {
    if (HitPoints && EnergyPoints) {
        std::cout << "ScavTrap " << name << " attacks " << target
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