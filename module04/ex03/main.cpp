/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:31:15 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/28 17:45:58 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    ICharacter* me = new Character("me");
    AMateria* tmp;
    ICharacter* bob = new Character("bob");
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return (0);
}

/*
* shoots an ice bolt at bob *
* heals bob's wounds *
*/