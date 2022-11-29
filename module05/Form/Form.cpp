/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:47:40 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/29 20:20:41 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {
    is_signed = 0;
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