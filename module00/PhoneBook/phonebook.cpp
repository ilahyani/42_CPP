/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:22:42 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/01 11:03:53 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    int i;

    for (i = 0; i < 8; i++)
    {
        contacts[i].available = 1;
        contacts[i].history = 0;
    }
}

int main(void)
{
    std::string cmd;
    PhoneBook   phonebook;

    std::cout << "Welcome to the PhoneBook !!!" << std::endl;
    while (69)
    {
        std::cout << "Would you like to ADD, SEARCH or EXIT? ";
        std::cin >> cmd;
        if (cmd == "ADD")
            phonebook.contacts[get_index(phonebook)].add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            break ;
        else
            std::cout << "I'm fucking serious! ";
    }
    std::cout << "Farewell, My Lord" << std::endl;
    return (0);
}
