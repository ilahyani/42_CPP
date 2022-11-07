/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:27 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/07 15:06:31 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
    std::ofstream   os;
    std::ifstream   ifs;
    std::string     data[3];
    std::string     str;
    size_t          pos;

    if (ac != 4) {
        std::cout << "Error: Wrong arguments. Try again\n";
        return (1);
    }
    for (int i = 0; i < 3; i++)
        data[i] = av[i + 1];
    ifs.open(data[0]);
    os.open(data[0].append(".replace"));
    if (!ifs.is_open() || !os.is_open()) {      
        std::cout << "Error: Couldn't open the file. Try again\n";
        return (1);
    }
    getline(ifs, str, '\0');
    pos = 0;
    while (pos != std::string::npos) {
        pos = str.find(data[1]);
        if (pos != std::string::npos) {
            str.erase(pos, data[1].length());
            str.insert(pos, data[2]);
        }
    }
    os << str;
    return (0);
}