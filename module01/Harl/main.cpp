/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:53 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/10 21:20:39 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    obj;

    obj.complain("INFO");
    obj.complain("DEBUG");
    obj.complain("WARNING");
    obj.complain("ERROR");
    return (0);
}