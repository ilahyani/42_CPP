/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:34:56 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/26 09:43:19 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap Default Constructor Called\n";
    ClapTrap::name = "_clap_trap";
    this->HitPoints = FragTrap::HitPoints;
    this->AttackDamage = FragTrap::AttackDamage;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    std::cout << "EnergyPoints: ";
    std::cout << EnergyPoints << "\n";
    std::cout << "HitPoints: ";
    std::cout << HitPoints << "\n";
    std::cout << "AttackDamage: ";
    std::cout << AttackDamage << "\n";
}

DiamondTrap::DiamondTrap(std::string str) : name(str) {
    std::cout << "DiamondTrap String Constructor Called\n";
    ClapTrap::name = str.append("_clap_name");
    this->HitPoints = FragTrap::HitPoints;
    this->AttackDamage = FragTrap::AttackDamage;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    std::cout << "EnergyPoints: ";
    std::cout << EnergyPoints << "\n";
    std::cout << "HitPoints: ";
    std::cout << HitPoints << "\n";
    std::cout << "AttackDamage: ";
    std::cout << AttackDamage << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
    *this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    EnergyPoints = other.EnergyPoints;
    HitPoints = other.HitPoints;
    AttackDamage = other.AttackDamage;
    name = other.name;
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Default Destructor Called\n";
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "My name is " << name << "\n";
    std::cout << "My ClapTrap's name is " << ClapTrap::name << "\n";
}
