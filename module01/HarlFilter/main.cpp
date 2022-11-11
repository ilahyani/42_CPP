/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:12:55 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/11 17:43:26 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl        obj;
    std::string arg;

    if (ac != 2) {
        std::cout << "Bad arguments. Try again!\n";
        return (1);
    }
    arg = av[1];
    obj.complain(arg);
    return (0);
}