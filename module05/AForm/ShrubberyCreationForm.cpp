/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:50:24 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 18:06:40 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(target, "ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
     : AForm(target, "ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& copy) {
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other) {
    this->~ShrubberyCreationForm();
    new (this) ShrubberyCreationForm(other.getTarget());
    return (*this);
}

const std::string& ShrubberyCreationForm::getTarget(void) const {
    return (target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (AForm::getGradeToExec()) {
        if (executor.getGrade() <= this->getGradeToExec())
            executor.executeForm(*this);
        else
            throw (AForm::GradeTooLowException());
    }
    else
        std::cout << "Form not signed\n";
}