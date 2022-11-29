/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:46:09 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 10:37:43 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character() {
    std::cout << "Character default constructor called\n";
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::~Character() {
    std::cout << "Character default destructor called\n";
    delete [] inventory;
}

std::string const & Character::getName() const {
    return (name);
}

void Character::equip(AMateria* m) {
    int i = -1;

    while (inventory[++i]);
    if (i > 3)
        return ;
    inventory[i] = m;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return ;
    inventory[idx] = NULL; //leak
}

void Character::use(int idx, ICharacter& target) {
    AMateria::use(*inventory[idx]);
}
