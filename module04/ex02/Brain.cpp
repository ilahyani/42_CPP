/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:46:22 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 12:20:55 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default constructor called\n";
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain Copy constructor called\n";
    *this = copy;
}

Brain::~Brain() {
    std::cout << "Brain Default desctructor called\n";
}

Brain& Brain::operator=(const Brain& other) {
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    return (*this);
}