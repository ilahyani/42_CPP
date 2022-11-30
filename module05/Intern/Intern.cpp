/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:29:04 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 19:21:21 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern& copy) {
    *this = copy;
}

Intern& Intern::operator=(Intern& other) {
    (void) other;
    return (*this);
}

FORM* Intern::makeForm(std::string name, std::string target) {
    std::string tab[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    FORM* (Intern::*fun[4])(std::string target) = {&Intern::newPresidentialPardon,
        &Intern::newRobotomyRequest,
        &Intern::newShrubberyCreation};

    for (int i = 0; i < 3; i++)
        if (tab[i] == name)
            return ((this->*fun[i])(target));
    std::cout << name << ": No such form exists\n";
    return (NULL);
}

FORM* Intern::newPresidentialPardon(std::string target) {
    PresidentialPardonForm  P(target);
    FORM* F = &P;
    std::cout << "Intern creates " << P.getName() << "targeted on " << target << "\n";
    return (F);
}

FORM* Intern::newRobotomyRequest(std::string target) {
    RobotomyRequestForm R(target);
    FORM* F = &R;
    std::cout << "Intern creates " << R.getName() << "targeted on " << target << "\n";
    return (F);
}

FORM* Intern::newShrubberyCreation(std::string target) {
    ShrubberyCreationForm   S(target);
    FORM* F = &S;
    std::cout << "Intern creates " << S.getName() << "targeted on " << target << "\n";
    return (F);
}
