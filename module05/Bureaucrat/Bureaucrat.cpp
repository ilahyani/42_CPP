/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:22:06 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/01 13:23:04 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
    if (grade > 150)
        throw (GradeTooLowException());
    if (grade < 1)
        throw (GradeTooHighException());
    this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& copy) {
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& other) {
    this->~Bureaucrat();
    new (this) Bureaucrat(other.name, other.grade);
    return (*this);
}

const int& Bureaucrat::getGrade(void) const {
    return grade;
}

const std::string& Bureaucrat::getName(void) const {
    return name;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low\n");
}

void Bureaucrat::incrementGrade(void) {
    if (grade == 1)
        throw(GradeTooHighException());
    grade--;
}

void Bureaucrat::decrementGrade(void) {
    if (grade == 150)
        throw (GradeTooLowException());
    grade++;
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj) {
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "\n"; 
    return (stream);
}