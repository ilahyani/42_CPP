/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:11:45 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/21 19:19:08 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string my_string = "HI THIS IS BRAIN";
    std::string* stringPTR = &my_string;
    std::string& stringREF = my_string;

    std::cout << &my_string << "\n";
    std::cout << &stringPTR << "\n";
    std::cout << &stringREF << "\n";
    std::cout << my_string << "\n";
    std::cout << *stringPTR << "\n";
    std::cout << stringREF << "\n";
}