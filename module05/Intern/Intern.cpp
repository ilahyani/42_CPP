/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:29:04 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 19:28:13 by ilahyani         ###   ########.fr       */
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

Form* Intern::makeForm(std::string name, std::string target) {
    std::string tab[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    Form* (Intern::*fun[4])(std::string target) = {&Intern::newPresidentialPardon,
        &Intern::newRobotomyRequest,
        &Intern::newShrubberyCreation};

    for (int i = 0; i < 3; i++)
        if (tab[i] == name)
            return ((this->*fun[i])(target));
    std::cout << name << ": No such Form exists\n";
    return (NULL);
}

Form* Intern::newPresidentialPardon(std::string target) {
    PresidentialPardonForm  P(target);
    Form* F = &P;
    std::cout << "Intern creates " << P.getName() << " targeted on " << target << "\n";
    return (F);
}

Form* Intern::newRobotomyRequest(std::string target) {
    RobotomyRequestForm R(target);
    Form* F = &R;
    std::cout << "Intern creates " << R.getName() << " targeted on " << target << "\n";
    return (F);
}

Form* Intern::newShrubberyCreation(std::string target) {
    ShrubberyCreationForm   S(target);
    Form* F = &S;
    std::cout << "Intern creates " << S.getName() << " targeted on " << target << "\n";
    return (F);
}
