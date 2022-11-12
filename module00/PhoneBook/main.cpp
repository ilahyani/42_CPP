/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:47:01 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/12 16:39:22 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    std::string cmd;
    PhoneBook   phonebook;
    int         last_updated;

    std::cout << "Welcome to the PhoneBook !!!" << std::endl;
    last_updated = 0;
    while (69)
    {
        std::cout << "Would you like to ADD, SEARCH or EXIT? ";
        std::cin >> cmd;
        if (cmd == "ADD") {
            phonebook.contacts[last_updated].add();
            last_updated = (last_updated + 1) % 8;
        }
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            break ;
        else
            std::cout << "Seriously, ";
    }
    std::cout << "Farewell, My Lord" << std::endl;
    return (0);
}