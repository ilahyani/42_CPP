/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:46:17 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 19:21:21 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class FORM
{
    bool is_signed;
    const int gradeToSign;
    const int gradeToExec;
    const std::string name;
    std::string target;
    public:
        FORM();
        FORM(std::string& target, std::string name, int gradeToSign, int gradeToExec);
        virtual ~FORM();
        const std::string& getName(void) const;
        const int& getGradeToSign(void) const;
        const int& getGradeToExec(void) const;
        bool getIsSign(void) const;
        void beSigned(Bureaucrat& b);
        const std::string& getTarget(void) const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& stream, const FORM& obj);

#endif