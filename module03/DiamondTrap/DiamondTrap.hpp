/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:34:54 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/25 18:24:30 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    std::string  name;
    public:
        DiamondTrap();
        DiamondTrap(std::string str);
        DiamondTrap(const DiamondTrap& copy);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& other);
        void whoAmI(void);
};

#endif