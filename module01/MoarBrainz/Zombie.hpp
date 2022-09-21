/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:32:04 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/21 19:28:55 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

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