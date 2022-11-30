/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:22:09 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 17:17:44 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() 
{
	Bureaucrat bureaucrat("Akainu", 1);
	Bureaucrat bureaucrat_2("smoker", 100);
	PresidentialPardonForm P("Pedro");
	RobotomyRequestForm R("Harl");
	ShrubberyCreationForm S("home");

	try {
		//////////////////////////////////////////////////////////////
		std::cout << "[TEST 1]:\n";
		//////////////////////////////////////////////////////////////
		P.beSigned(bureaucrat);
		bureaucrat.signAForm(P);
		P.execute(bureaucrat);
	
		R.beSigned(bureaucrat);
		bureaucrat.signAForm(R);
		R.execute(bureaucrat);
	
		S.beSigned(bureaucrat);
		bureaucrat.signAForm(S);
		S.execute(bureaucrat);

		//////////////////////////////////////////////////////////////
		std::cout << "[TEST 2]:\n";
		//////////////////////////////////////////////////////////////
		S.beSigned(bureaucrat_2);
		bureaucrat_2.signAForm(S);
		S.execute(bureaucrat_2);

		P.beSigned(bureaucrat_2);
		bureaucrat_2.signAForm(P);
		P.execute(bureaucrat_2);

		R.beSigned(bureaucrat_2);
		bureaucrat_2.signAForm(R);
		R.execute(bureaucrat_2);
	}
	catch (const std::exception& e) {
		std::cout << e.what();
	}
    return 0;
}