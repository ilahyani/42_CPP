/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:26:23 by ilahyani          #+#    #+#             */
/*   Updated: 2022/10/31 11:08:09 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	std::string type;
	public:
		Weapon(std::string WeaponType);
		Weapon();
		~Weapon();
		const std::string   &getType(void);
		void    setType(std::string type);
};

#endif