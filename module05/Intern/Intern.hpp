/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:28:38 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 19:27:51 by ilahyani         ###   ########.fr       */
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
        Form* makeForm(std::string name, std::string target);
        Form* newPresidentialPardon(std::string target);
        Form* newRobotomyRequest(std::string target);
        Form* newShrubberyCreation(std::string target);
};

#endif