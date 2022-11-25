/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:52:49 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/25 18:37:16 by ilahyani         ###   ########.fr       */
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
    std::cout << "FragTrap Copy Constructor Called\n";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy) {
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    EnergyPoints = other.EnergyPoints;
    HitPoints = other.HitPoints;
    AttackDamage = other.AttackDamage;
    name = other.name;
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Default Destructor Called\n";
}

void FragTrap::highFivesGuys(void) {
    std::cout << "I request the highest of fives\n";
}
