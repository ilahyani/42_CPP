/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:48:43 by ilahyani          #+#    #+#             */
/*   Updated: 2023/03/14 20:35:48 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"

int main(int ac, char** av) {
    std::ifstream   ifs;
    std::string     line;
    std::string     date;
    double          value;
    vecpair         vec;

    if (ac == 2) {
        vec = parse_data();
        ifs.open(av[1]);
        if (!ifs.is_open())
            return (std::cout << "Error: could not open file\n", 1);
        getline(ifs, line);
        while (getline(ifs, line)) {
            try {
                date = line.substr(0, 10);
                value = strtod(line.substr(13, line.size()).c_str(), NULL);
            }
            catch (const std::out_of_range& oor) {
                std::cerr << "Error: bad input\n";
                continue;
            }
            if (value < 0 || value > 1000) {
                std::cerr << "Error: not a positive integer or number too large\n";
                continue;
            }
            for (vecpair::iterator it = vec.begin(); it != vec.end(); it++)
                if (it->first <= date && (it + 1)->first > date)
                    std::cout << date << " => " << value << " = " << value * it->second << "\n";
        }
        return 0;
    }
    return (std::cout << "Error: wrong argument number\n", 1);
}