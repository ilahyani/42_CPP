/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:27:03 by ilahyani          #+#    #+#             */
/*   Updated: 2022/10/31 11:08:21 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string WeaponType) {
	type = WeaponType;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType(void) {
	return (type);
}

void    Weapon::setType(std::string Type) {
	type = Type;
} 
