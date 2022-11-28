/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:24:23 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 18:38:53 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(std::string const & type);
        Cure(const Cure& copy);
        virtual ~Cure();
        Cure& operator=(const Cure& copy);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif