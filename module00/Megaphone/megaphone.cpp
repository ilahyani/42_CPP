/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:21:49 by ilahyani          #+#    #+#             */
/*   Updated: 2022/08/30 14:42:53 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    for (i = 1; av[i]; i++)
    {
        for (j = 0; av[i][j]; j++)
        {
            isalpha(av[i][j]) 
            ? std::cout << (char) toupper(av[i][j])
            : std::cout << av[i][j];
        }
        if (av[i + 1])
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}