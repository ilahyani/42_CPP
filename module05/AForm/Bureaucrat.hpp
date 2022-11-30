/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:22:11 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 17:07:50 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>

class AForm;

class Bureaucrat
{
    const std::string name;
    int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat& copy);
        ~Bureaucrat();
        Bureaucrat& operator=(Bureaucrat& other);
        const std::string& getName(void) const;
        const int& getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        void signAForm(AForm& form);
        void executeForm(AForm const & form) const;
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);
int ShrubberyCreationFormExecution(std::string target);
int RobotomyRequestFormExecution(std::string target);
int PresidentialPardonFormExecution(std::string target);

#endif