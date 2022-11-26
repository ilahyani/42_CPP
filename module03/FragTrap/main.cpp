/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:54:48 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/26 09:27:33 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap    obj("Sanji");

    obj.attack ("Queen");
    std::cout << "\n";
    obj.takeDamage(50);
    std::cout << "\n";
    obj.beRepaired(50);
    std::cout << "\n";
    obj.takeDamage(100);
    std::cout << "\n";
    obj.attack ("Kaido");
    std::cout << "\n";
    obj.highFivesGuys();
    return (0);
}