/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:22:09 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 11:14:44 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
	try {
		Bureaucrat bureaucrat_2("smoker", 100);
		Bureaucrat bureaucrat("Akainu", 10);
		Form form("LuffyPoster", 20, 10);
		Form form_2("ChopperPoster", 100, 50);
	
		std::cout << form << form_2;
		std::cout << "---------------------------------\n";
		std::cout << "[TEST 1]: ";
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
		
		std::cout << "[TEST 2]: ";
		form.beSigned(bureaucrat_2);
		bureaucrat_2.signForm(form);
		
		std::cout << "[TEST 3]: ";
		form_2.beSigned(bureaucrat);
		bureaucrat.signForm(form_2);
		
		std::cout << "[TEST 4]: ";
		form_2.beSigned(bureaucrat_2);
		bureaucrat_2.signForm(form_2);

		Form form_3("Roger", -55, 250);
		Bureaucrat bureaucrat_3("smoker", 400);
	}
	catch (const std::exception& e) {
		std::cout << e.what();
	}
    return 0;
}