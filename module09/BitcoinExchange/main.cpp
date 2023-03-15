/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:48:43 by ilahyani          #+#    #+#             */
/*   Updated: 2023/03/15 16:33:31 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av) {
    std::ifstream   ifs;
    std::string     line;
    std::map<time_t, float>  _map;

    if (ac == 2) {
        _map = parse_data();
        ifs.open(av[1]);
        if (!ifs.is_open())
            return (std::cout << "Error: could not open file\n", 1);
        getline(ifs, line);
        while (getline(ifs, line))
            get_values(_map, line);
        return 0;
    }
    return (std::cout << "Error: wrong argument number\n", 1);
}