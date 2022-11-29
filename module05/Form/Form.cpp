/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:47:40 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 22:38:33 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): is_signed(0), gradeToSign(150), gradeToExec(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExec)
    : is_signed(0), gradeToSign(gradeToSign), gradeToExec(gradeToExec), name(name) {}

Form::Form(Form& copy)
    : gradeToSign(getGradeToSign()), gradeToExec(copy.getGradeToExec()) {
    *this = copy;
}

Form::~Form() {}

Form& Form::operator=(Form& other) {
    this->~Form();
    new (this) Form(other.name, other.gradeToSign, other.gradeToExec);
    return (*this);
}

const int& Form::getGradeToSign(void) const {
    return gradeToSign;
}

const int& Form::getGradeToExec(void) const {
    return gradeToExec;
}

const std::string& Form::getName(void) const {
    return name;
}

bool Form::getIsSign(void) const {
    return is_signed;
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade too high\n");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade too low\n");
}

void Form::beSigned(Bureaucrat& b) {
    if (b.getGrade() <= this->gradeToSign)
        is_signed = 1;
    else
        throw (Form::GradeTooLowException());
}

std::ostream& operator<<(std::ostream& stream, const Form& obj) {
    stream << "Form " << obj.getName() << " requires at least grade " << obj.getGradeToSign()
        << " to sign and at least grade " << obj.getGradeToExec() << " to execute\n";
    return (stream);
}