/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:22:09 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 19:22:32 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() 
{
	Intern someRandomIntern1;
	Intern someRandomIntern2;
	Intern someRandomIntern3;
	FORM* rrf;

	rrf = someRandomIntern1.makeForm("robotomy request", "Bender");
	rrf = someRandomIntern1.makeForm("presidential pardon", "Pedro");
	rrf = someRandomIntern1.makeForm("shrubbery creation", "Kuma");
    return 0;
}