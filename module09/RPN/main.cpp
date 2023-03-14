/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:41:53 by ilahyani          #+#    #+#             */
/*   Updated: 2023/03/14 22:36:19 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stack>

int main(int ac, char **av) {
    std::stack<int> s;
    std::string str;
    int x;

    if (ac == 2) {
        str = av[1];
        for (size_t i = 0; i < str.size(); i++) {
            if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*') {
                x = s.top();
                s.pop();
                if (str[i] == '+')
                    s.top() += x;
                else if (str[i] == '*')
                    s.top() *= x;
                else if (str[i] == '-')
                    s.top() -= x;
                else {
                    if (x && s.top())
                        s.top() /= x;
                    else
                        return (std::cerr << "Error: operation can't be done\n", 1);
                }
                continue ;
            }
            else if (str[i] >= '0' && str[i] <= '9')
                s.push(str[i] - 48);
            else if (str[i] != ' ')
                return (std::cerr << "Error\n", 1);
        }
        std::cout << s.top() << "\n";
    }
    else
        std::cerr << "Error: no arguments\n";
    return 0;
}