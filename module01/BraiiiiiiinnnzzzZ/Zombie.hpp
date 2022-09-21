/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:19:56 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/21 18:14:34 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie {
    public:
        Zombie ();
        ~Zombie();
        void setName(std::string str);
    std::string name;
    void announce (void);  
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif