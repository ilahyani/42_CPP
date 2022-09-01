/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:49:21 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/01 10:50:55 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    PhoneBook::search()
{
    int idx;

    idx = -1;
    std::cout << "|index     |first name|last name |nick name |" << std::endl;
    for (int i = 0; !contacts[i].available; i++)
    {
        std::cout << "|";
        std::cout << i << "         |";
        print_column(contacts[i].first_name);
        print_column(contacts[i].last_name);
        print_column(contacts[i].nick_name);
        std::cout << std::endl;
    }
    std::cout << "Who are you looking for? ";
    std::cin >> idx;
    if (std::cin.fail())
    {
        std::cout << "Oh no, try a number next time!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    else if (idx > 8 || contacts[idx].available == 1)
        std::cout << "NUMBER " << idx << " was absorbed by the upside-down! Let's try again" << std::endl;
    else
        print_contact(contacts[idx]);
}

void    print_column(std::string str)
{
    size_t  len = str.length();
    int     i;

    if (len == 10)
        std::cout << str << "|";
    else if (len < 10)
    {
        std::cout << str;
        for (i = 0; i < (10 - len); i++)
            std::cout << " ";
        std::cout << "|";
    }
    else
    {
        for (i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << ".|";
    }
}

void    print_contact(Contact contact)
{
    std::cout << "First name: " << contact.first_name << std::endl;
    std::cout << "last name: " << contact.last_name << std::endl;
    std::cout << "nick name: " << contact.nick_name << std::endl;
    std::cout << "phone number: " << contact.phone_nbr << std::endl;
    std::cout << "darket secret: " << contact.darkest_secret << std::endl;
}
