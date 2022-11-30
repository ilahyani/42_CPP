/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:47:40 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 19:22:32 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

FORM::FORM(): is_signed(0), gradeToSign(150), gradeToExec(150) {}

FORM::FORM(std::string& target, std::string name, int gradeToSign, int gradeToExec)
    : is_signed(0), gradeToSign(gradeToSign), gradeToExec(gradeToExec), name(name), target(target) {
    if (gradeToSign < 1 || gradeToExec < 1)
        throw (GradeTooHighException());
    if (gradeToSign > 150 || gradeToExec > 150)
        throw (GradeTooLowException());
}

FORM::~FORM() {}

const int& FORM::getGradeToSign(void) const {
    return gradeToSign;
}

const int& FORM::getGradeToExec(void) const {
    return gradeToExec;
}

const std::string& FORM::getName(void) const {
    return name;
}

bool FORM::getIsSign(void) const {
    return is_signed;
}

const char *FORM::GradeTooHighException::what() const throw() {
    return ("Grade too high\n");
}

const char *FORM::GradeTooLowException::what() const throw() {
    return ("Grade too low\n");
}

void FORM::beSigned(Bureaucrat& b) {
    if (b.getGrade() <= this->gradeToSign)
        is_signed = 1;
    else
        throw (FORM::GradeTooLowException());
}

const std::string& FORM::getTarget(void) const {
    return (target);
}

std::ostream& operator<<(std::ostream& stream, const FORM& obj) {
    stream << "FORM " << obj.getName() << " requires at least grade " << obj.getGradeToSign()
        << " to sign and at least grade " << obj.getGradeToExec() << " to execute\n";
    return (stream);
}