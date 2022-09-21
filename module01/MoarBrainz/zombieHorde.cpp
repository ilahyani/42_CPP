/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:32:01 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/21 19:01:07 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* zombie;

    zombie = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombie[i].setName(name);
    }
    return (zombie);
}
