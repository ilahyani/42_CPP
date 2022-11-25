/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:42:03 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/25 09:30:52 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "ClapTrap Default Constructor Called\n";
}

ClapTrap::ClapTrap(std::string str)
    : name(str), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "ClapTrap String Constructor Called\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Default Destructor Called\n";
}

//PRINT STATUS AFTER ATTACK, DAMAGE AND REPAIR;

void    ClapTrap::attack(const std::string& target) {
    if (HitPoints && EnergyPoints) {
        std::cout << "ClapTrap " << name << " attacks " << target
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

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name << " loses " << amount
        << " hit points\n";
    HitPoints -= amount;
    if (HitPoints < 0)
        HitPoints = 0;
    std::cout << HitPoints << " HitPoints left | ";
    std::cout << EnergyPoints << " EnergyPoints left\n";
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (EnergyPoints) {
        std::cout << "ClapTrap " << name << " gains " << amount
            << " hit points\n";
        HitPoints += amount;
        EnergyPoints--;
        if (EnergyPoints < 0)
            EnergyPoints = 0;
    }
    else
        std::cout << name << " Can't be repaired, no EnergyPoints left\n";
    std::cout << HitPoints << " HitPoints left | ";
    std::cout << EnergyPoints << " EnergyPoints left\n";
}