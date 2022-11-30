/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:28:38 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 19:22:32 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern& copy);
        ~Intern();
        Intern& operator=(Intern& other);
        FORM* makeForm(std::string name, std::string target);
        FORM* newPresidentialPardon(std::string target);
        FORM* newRobotomyRequest(std::string target);
        FORM* newShrubberyCreation(std::string target);
};

#endif