/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:54:48 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/26 09:44:28 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap    obj("Shanks");

    obj.whoAmI();
    std::cout << "\n";
    obj.attack("BlackBeard");
    std::cout << "\n";
    obj.takeDamage(5);
    std::cout << "\n";
    obj.beRepaired(5);
    std::cout << "\n";
    obj.takeDamage(100);
    std::cout << "\n";
    obj.attack("BlackBeard");
    std::cout << "\n";
    obj.beRepaired(100);
    std::cout << "\n";
    obj.attack("BlackBeard");
    return (0);
}