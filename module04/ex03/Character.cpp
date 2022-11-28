/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:46:09 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 18:57:17 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character() {
    std::cout << "Character default destructor called\n";
}

std::string const & Character::getName() const {
    return (name);
}

void Character::equip(AMateria* m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, Character& target) {

}
