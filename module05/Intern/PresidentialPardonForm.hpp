/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:26:09 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/30 19:27:51 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONForm_HPP
#define PRESIDENTIALPARDONForm_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm& copy);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(PresidentialPardonForm& other);
        const std::string& getTarget(void) const;
        void execute(Bureaucrat const & executor) const;
};

#endif