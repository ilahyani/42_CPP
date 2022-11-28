/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:24:20 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 18:39:01 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const & type);
        Ice(const Ice& copy);
        virtual ~Ice();
        Ice& operator=(const Ice& copy);
        AMateria*   clone() const;
        void use(ICharacter& target);
};

#endif