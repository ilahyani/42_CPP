/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:27 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/03 15:23:57 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
    std::ofstream   ost(av[1]);
    std::ifstream   ifst(av[1]);
    std::string     str;

    // if (ac != 4) {
    //     std::cout << "Not Enough Arguments. Try Again\n";
    //     return (1);
    // }
    // ost.open(av[1]);
    // ost << "TTA TL9 RA RJLI HADIK \n";
    while (getline(ifst, str))
        std::cout << str;
    ost.close();
    return (0);
}