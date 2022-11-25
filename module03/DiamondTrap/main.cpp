/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:54:48 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/25 18:19:46 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap    obj("Shanks");

    obj.whoAmI();
    obj.attack("BlackBeard");
    obj.takeDamage(5);
    obj.beRepaired(5);
    obj.takeDamage(100);
    obj.attack("BlackBeard");
    obj.beRepaired(100);
    obj.attack("BlackBeard");
    return (0);
}