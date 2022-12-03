/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:18:40 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/03 12:46:34 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av) {

    if (ac != 2) {
        std::cout << "Error: Wrong arguments. Try again\n";
        return (1);
    }
    try {
        Conversion convert(av[1]);

        convert.convertData();
        convert.printData();
    }
    catch (std::exception &e) {
        std::cout << e.what();
    }
    return (0);
}