/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:43:20 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/25 10:01:58 by ilahyani         ###   ########.fr       */
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

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap is now in Gatekeeper mode\n";
}