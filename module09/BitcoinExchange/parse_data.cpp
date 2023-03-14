/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:34:18 by ilahyani          #+#    #+#             */
/*   Updated: 2023/03/14 20:37:58 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"

vecpair parse_data(void) {
    std::ifstream   data;
    std::string     line;
    vecpair         vec;
    sd_pair         p;
    
    data.open("data.csv");
    if (!data.is_open())
        std::cout << "Error: could not open database\n";
    getline(data, line);
    while (getline(data, line)) {
        p.first = line.substr(0, 10);
        p.second = strtod(line.substr(11, line.size()).c_str(), NULL);
        vec.push_back(p);
    }
    return vec;
}