/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:47:01 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/12 18:41:57 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string cmd;
    PhoneBook   PhoneBook;
    int         last_updated;

    std::cout << "Welcome to the PhoneBook !!!" << std::endl;
    last_updated = 0;
    while (42)
    {
        std::cout << "Would you like to ADD, SEARCH or EXIT? ";
        std::cin >> cmd;
        if (std::cin.eof())
            break;
        else if (cmd.length() == 0)
            continue;
        else if (cmd == "ADD") {
            PhoneBook.contacts[last_updated].add();
            last_updated = (last_updated + 1) % 8;
        }
        else if (cmd == "SEARCH")
            PhoneBook.search();
        else if (cmd == "EXIT")
            break ;
        else
            std::cout << "Wrong cmd, ";
    }
    std::cout << "Farewell, My Lord" << std::endl;
    return (0);
}