/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:13:00 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/11 17:59:15 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
typedef void (Harl::*ptr2mbr)(void);

void    Harl::complain(std::string level) {
    ptr2mbr fun[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string tab [4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    for (i = 0; i < 4; i++)
        if (level == tab[i])
            break;
    switch (i)
    {
        case 0:
            for (int j = i; j < 4; j++)
                (this->*fun[j])();
            break;
        case 1:
            for (int j = i; j < 4; j++)
                (this->*fun[j])();
            break;
        case 2:
            for (int j = i; j < 4; j++)
                (this->*fun[j])();
            break;
        case 3:
            for (int j = i; j < 4; j++)
                (this->*fun[j])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}

void    Harl::debug(void) {
    std::cout << "[DEBUG]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
    std::cout << "I really do!\n";
    std::cout << "\n";
}

void    Harl::info(void) {
    std::cout << "[INFO]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ";
    std::cout << "If you did, I wouldn't be asking for more!\n";
    std::cout << "\n";
}

void    Harl::warning(void) {
    std::cout << "[WARNING]\n";
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I've been coming for years whereas you started working here since last month.\n";
    std::cout << "\n";
}

void    Harl::error(void) {
    std::cout << "[ERROR]\n";
    std::cout << "his is unacceptable! I want to speak to the manager now.\n";
    std::cout << "\n";
}