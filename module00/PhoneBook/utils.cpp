/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_functions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:51:22 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/01 10:52:56 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int get_oldest(PhoneBook phonebook)
{
    int i;
    int oldest;

    oldest = 0;
    for (i = 0; i < 7 && phonebook.contacts[i].history == phonebook.contacts[i + 1].history; i++);
    if (i == 7)
        return (0);
    for (i = 0; i < 7; i++)
        if (phonebook.contacts[i].history > phonebook.contacts[i + 1].history)
            break ;
    return (i + 1);
}

int get_index(PhoneBook phonebook)
{
    int i;

    for (i = 0; phonebook.contacts[i].available == 0 && i < 8; i++);
    return ((i != 8) ? i : get_oldest(phonebook));
}
