/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:27:03 by ilahyani          #+#    #+#             */
/*   Updated: 2022/10/29 18:20:26 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string const   &Weapon::getType(void) {
    std::string const &ref = type;
    return (ref);
}

void    Weapon::setType(std::string type)
{
    Weapon::type = type;
}