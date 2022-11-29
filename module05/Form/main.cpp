/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:22:09 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 22:03:48 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
	Bureaucrat bureaucrat("Akainu", 10);
	Bureaucrat bureaucrat_2("smoker", 100);
	Form form("LuffyPoster", 20, 10);
	Form form_2("ChopperPoster", 100, 50);

	std::cout << form << form_2;
	try {
		std::cout << "[TEST 1]:\n";
		form.beSigned(bureaucrat);
		std::cout << "[TEST 2]:\n";
		form.beSigned(bureaucrat_2);
		std::cout << "[TEST 3]:\n";
		form_2.beSigned(bureaucrat);
		std::cout << "[TEST 4]:\n";
		form_2.beSigned(bureaucrat_2);
	}
	catch (const std::exception& e) {
		std::cout << e.what();
	}
    return 0;
}