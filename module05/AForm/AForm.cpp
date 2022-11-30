/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:47:40 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 11:01:39 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): is_signed(0), gradeToSign(150), gradeToExec(150) {}

AForm::AForm(std::string& target, std::string name, int gradeToSign, int gradeToExec)
    : is_signed(0), gradeToSign(gradeToSign), gradeToExec(gradeToExec), name(name), target(target) {
    if (gradeToSign < 1 || gradeToExec < 1)
        throw (GradeTooHighException());
    if (gradeToSign > 150 || gradeToExec > 150)
        throw (GradeTooLowException());
}

AForm::~AForm() {}

const int& AForm::getGradeToSign(void) const {
    return gradeToSign;
}

const int& AForm::getGradeToExec(void) const {
    return gradeToExec;
}

const std::string& AForm::getName(void) const {
    return name;
}

bool AForm::getIsSign(void) const {
    return is_signed;
}

const char *AForm::GradeTooHighException::what() const throw() {
    return ("Grade too high\n");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("Grade too low\n");
}

void AForm::beSigned(Bureaucrat& b) {
    if (b.getGrade() <= this->gradeToSign)
        is_signed = 1;
    else
        throw (AForm::GradeTooLowException());
}

const std::string& AForm::getTarget(void) const {
    return (target);
}

std::ostream& operator<<(std::ostream& stream, const AForm& obj) {
    stream << "AForm " << obj.getName() << " requires at least grade " << obj.getGradeToSign()
        << " to sign and at least grade " << obj.getGradeToExec() << " to execute\n";
    return (stream);
}