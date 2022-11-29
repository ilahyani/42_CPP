/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:46:17 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 20:20:24 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Form
{
    const std::string name;
    const int gradeToSign;
    const int gradeToExec;
    bool is_signed;
    public:
        Form();
        Form(Form& copy);
        ~Form();
        Form& operator=(Form& other);
        const std::string& getName(void) const;
        const int& getGradeToSign(void) const;
        const int& getGradeToExec(void) const;
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

#endif