/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:31:57 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/21 19:00:42 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie* zombie;

    zombie = zombieHorde(5, "imeghran");
    for (int i = 0; i < 5; i++) {
        zombie[i].announce();
    }
    delete [] zombie;
    return (0);
}