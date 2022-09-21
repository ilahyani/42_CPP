/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:32:04 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/21 18:55:00 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie {
    public:
        ~Zombie();
        void setName(std::string str);
    std::string name;
    void announce (void);  
};

Zombie *newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif