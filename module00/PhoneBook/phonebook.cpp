/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:22:42 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/12 16:39:08 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() {}

void    Contact::add()
{
    std::string input;
    std::string fields[5] = {"First Name", "Last Name", "Nick Name", "Phone Number", "Darkest Secret"};
    int i;

    std::cout << "Creating a new contact.. " << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    i = 0;
    while (i < 5) {
        std::cout << "Enter the " << fields[i] << " please: ";
        getline(std::cin, input);
        if (input.length() == 0)
            std::cout << fields[i] << " Can't be empty! Try again:\n";
        else {
            fields[i] = input;
            i++;
            input.clear();
        }
    }
    first_name = fields[0];
    last_name = fields[1];
    nick_name = fields[2];
    phone_nbr = fields[3];
    darkest_secret = fields[4];
    std::cout << "A new contact has been created successfully!" << std::endl;
}

void    PhoneBook::search()
{
    int idx;

    std::cout << "|index     |first name|last name |nick name |" << std::endl;
    for (int i = 0; i < 8 && contacts[i].first_name.length() != 0; i++)
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
    else if (idx > 7 || contacts[idx].first_name.length() == 0)
        std::cout << "NUMBER " << idx << " was absorbed by the upside-down! Let's try again" << std::endl;
    else
        print_contact(contacts[idx]);
}