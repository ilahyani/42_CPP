/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:56 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/11 13:10:18 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void    Harl::complain(std::string level) {
    void (Harl::*ptr2mbr[4])(void) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
    std::string tab[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
    for (int i = 0; i < 4; i++)
        if (level == tab[i])
            (this->*ptr2mbr[i])();
}

void    Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
    std::cout << "I really do!\n";
}

void    Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ";
    std::cout << "If you did, I wouldn't be asking for more!\n";
}

void    Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I've been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void) {
    std::cout << "his is unacceptable! I want to speak to the manager now.\n";
}