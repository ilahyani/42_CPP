/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:49:23 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/01 10:49:44 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    Contact::add()
{
    std::cout << "Creating a new contact.. " << std::endl;
    std::cout << "Enter the first name please: ";
    std::cin >> first_name;
    std::cout << "Enter the last name please: ";
    std::cin >> last_name;
    std::cout << "Enter the nick name please: ";
    std::cin >> nick_name;
    std::cout << "Enter the phone nbr please: ";
    std::cin >> phone_nbr;
    std::cout << "Enter the darkest secret please: ";
    std::cin >> darkest_secret;
    std::cout << "A new contact has been created successfully!" << std::endl;
    available = 0;
    history++;
}
