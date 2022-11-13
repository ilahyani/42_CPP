/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:51:22 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/12 18:29:09 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int get_index(PhoneBook PhoneBook)
{
    int i;

    for (i = 0; i < 8; i++)
        if (PhoneBook.contacts[i].first_name.length() == 0)
            break;
    return (i);
    
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