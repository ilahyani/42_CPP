/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:19:53 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/22 18:24:32 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie() {
    std::cout << Zombie::name << "\n";
}

Zombie::Zombie() {}

void    Zombie::setName(std::string str) {
    name = str;
}
