/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:22:06 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 18:11:19 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() {}

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

void Bureaucrat::signAForm(AForm& form) {
    if (form.getIsSign())
        std::cout << name << " signed " << form.getName() << "\n";
    else
        std::cout << name << " couldn't sign " << form.getName() << "\n";
}

void Bureaucrat::executeForm(AForm const & form) const {
    if (form.getGradeToExec() == 137) {
        if (ShrubberyCreationFormExecution(form.getTarget()))
            std::cout << name << " couldn't excute " << form.getName() << "\n";
        else
            std::cout << name << " excuted " << form.getName() << "\n";
    }
    else if (form.getGradeToExec() == 45) {
        if (RobotomyRequestFormExecution(form.getTarget()))
            std::cout << name << " couldn't excute " << form.getName() << "\n";
        else
            std::cout << name << " excuted " << form.getName() << "\n";
    }
    else if (form.getGradeToExec() == 5) {
        if (PresidentialPardonFormExecution(form.getTarget()))
            std::cout << name << " couldn't excute " << form.getName() << "\n";
        else
            std::cout << name << " excuted " << form.getName() << "\n";
    }
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj) {
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "\n";
    return (stream);
}

int ShrubberyCreationFormExecution(std::string target) {
    std::ofstream   os;

    os.open(target + "_shrubbery");
    if (!os.is_open()) {      
        std::cout << "Error: Couldn't open the file\n";
        return (1);
    }
    os << "                                                  .\n";
    os << "                                   .         ;\n";
    os << "      .              .              ;%     ;;\n";
    os << "        ,           ,                :;%  %;\n";
    os << "         :         ;                   :;%;'     .,\n";
    os << ",.        %;     %;            ;        %;'    ,;\n";
    os << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    os << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n";
    os << "    ;%;      %;        ;%;        % ;%;  ,%;'\n";
    os << "     `%;.     ;%;     %;'         `;%%;.%;'\n";
    os << "      `:;%.    ;%%. %@;        %; ;@%;%'\n";
    os << "         `:%;.  :;bd%;          %;@%;'\n";
    os << "           `@%:.  :;%.         ;@@%;'\n";
    os << "             `@%.  `;@%.      ;@@%;\n";
    os << "               `@%%. `@%%    ;@@%;\n";
    os << "                 ;@%. :@%%  %@@%;\n";
    os << "                   %@bd%%%bd%%:;\n";
    os << "                     #@%%%%%:;;\n";
    os << "                     %@@%%%::;\n";
    os << "                     %@@@%(o);  . '\n";
    os << "                     %@@@o%;:(.,'\n";
    os << "                 `.. %@@@o%::;\n";
    os << "                    `)@@@o%::;\n";
    os << "                     %@@(o)::;\n";
    os << "                    .%@@@@%::;\n";
    os << "                    ;%@@@@%::;.\n";
    os << "                   ;%@@@@%%:;;;.\n";
    os << "               ...;%@@@@@%%:;;;;,..\n";
    return (0);
}

int RobotomyRequestFormExecution(std::string target) {
    srand(time(NULL));
    int x = rand() % 2;
    
    if (x)
        std::cout << "[DRILLING NOISES!!!!!] " << target << " has been robotomized successfully\n";
    else
        std::cout << "Robotomy failed\n";
    return (0);
}

int PresidentialPardonFormExecution(std::string target) {
    std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
    return (0);
}