/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:19:56 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/20 12:02:03 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie {
    public:
        Zombie (std::string str);
        ~Zombie();
    std::string name;
    void announce (void);  
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif