/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:46:17 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 22:36:24 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;
class Form
{
    bool is_signed;
    const int gradeToSign;
    const int gradeToExec;
    const std::string name;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExec);
        Form(Form& copy);
        ~Form();
        Form& operator=(Form& other);
        const std::string& getName(void) const;
        const int& getGradeToSign(void) const;
        const int& getGradeToExec(void) const;
        bool getIsSign(void) const;
        void beSigned(Bureaucrat& b);
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& stream, const Form& obj);

#endif