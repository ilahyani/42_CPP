/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:21:49 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/12 12:31:32 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int main(int ac, char **av)
{
    int         i;
    int         j;
    std::string str;

    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    for (i = 1; av[i]; i++)
    {
        for (j = 0; av[i][j]; j++)
        {
            (av[i][j] >= 'a' && av[i][j] <= 'z')
            ? str.append(1, av[i][j] - 32)
            : str.append(1, av[i][j]);
        }
        if (av[i + 1])
            str.append(" ");
    }
    std::cout << str << std::endl;
    return (0);
}
