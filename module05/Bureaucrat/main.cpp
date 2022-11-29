/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:22:09 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 19:41:57 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
	int	HighGrade = 5;
	int LowGrade = 150;

	try {
		Bureaucrat obj("Aristocrat", HighGrade);
		std::cout << obj;
  	} catch (std::exception& exception) {
		std::cout << exception.what();
 	}
	try {
		Bureaucrat obj2("Bureaucrat", LowGrade);
		std::cout << obj2;
	} catch (const std::exception& e) {
		std::cout << e.what();
	}
    return 0;
}