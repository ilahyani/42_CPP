/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:54:48 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/26 08:37:12 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap    obj("Mugiwara");

    obj.attack ("Kaido");
    std::cout << "\n";
    obj.takeDamage(5);
    std::cout << "\n";
    obj.beRepaired(5);
    std::cout << "\n";
    obj.takeDamage(10);
    std::cout << "\n";
    obj.attack ("Kaido");
    std::cout << "\n";
    obj.guardGate();
    return (0);
}