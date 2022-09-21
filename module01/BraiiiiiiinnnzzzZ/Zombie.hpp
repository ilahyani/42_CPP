/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:19:56 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/21 19:29:03 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

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