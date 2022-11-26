/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:54:48 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/26 08:27:04 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap    obj("Shiruhigue");

    obj.attack ("Akainu");
    std::cout << "\n";
    obj.takeDamage(5);
    std::cout << "\n";
    obj.beRepaired(5);
    std::cout << "\n";
    obj.takeDamage(10);
    std::cout << "\n";
    obj.attack ("Akainu");
    return (0);
}