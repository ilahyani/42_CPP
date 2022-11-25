/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:54:48 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/25 09:50:44 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap    obj("Shiruhigue");

    obj.attack("Akainu");
    obj.takeDamage(5);
    obj.beRepaired(2);
    obj.takeDamage(15);
    obj.beRepaired(111);
    return (0);
}