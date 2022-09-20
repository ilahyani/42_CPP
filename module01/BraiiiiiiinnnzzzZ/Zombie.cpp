/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:19:53 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/20 12:04:53 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std:: string str) {
    name = str;
}

Zombie::~Zombie() {
    std::cout << Zombie::name << "\n";
}
