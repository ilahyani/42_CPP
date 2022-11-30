/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:50:03 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 19:21:21 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : FORM(target, "RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
     : FORM(target, "RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& copy) {
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other) {
    this->~RobotomyRequestForm();
    new (this) RobotomyRequestForm(other.getTarget());
    return (*this);
}

const std::string& RobotomyRequestForm::getTarget(void) const {
    return (target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (FORM::getGradeToExec()) {
        if (executor.getGrade() <= this->getGradeToExec())
            executor.executeForm(*this);
        else
            throw (FORM::GradeTooLowException());
    }
    else
        std::cout << "Form not signed\n";
}
