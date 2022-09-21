/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:31:59 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/21 18:54:45 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
    Zombie*  zombie;
    zombie = new Zombie;
    zombie->setName(name);
    return zombie;
}

void    Zombie::announce(void) {
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie() {
    std::cout << Zombie::name << "\n";
}

void    Zombie::setName(std::string str) {
    name = str;
}
