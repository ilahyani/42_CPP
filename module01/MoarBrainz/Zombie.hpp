/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:32:04 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/22 18:22:59 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie {
    std::string name;
    public:
        ~Zombie();
        void setName(std::string str);
        void announce (void);  
};

Zombie *newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif