/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:26:07 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/02 19:16:37 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form(target, "PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form(target, "PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& copy) {
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other) {
    this->~PresidentialPardonForm();
    new (this) PresidentialPardonForm(other.getTarget());
    return (*this);
}

const std::string& PresidentialPardonForm::getTarget(void) const {
    return (target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if ( Form::getIsSign()) {
        if (executor.getGrade() <= this->getGradeToExec())
            executor.executeForm(*this);
        else
            throw (Form::GradeTooLowException());
    }
    else
        std::cout << "Form not signed\n";
}
