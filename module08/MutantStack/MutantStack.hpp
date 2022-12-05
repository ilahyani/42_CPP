/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:47:47 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/05 15:34:55 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    using std::stack<T, Container>::c;
    public:
        typedef typename Container::iterator iterator;
        ~MutantStack() {}
        MutantStack() {}
        MutantStack(const MutantStack &copy) {
            (void)copy;
        }
        MutantStack& operator=(const MutantStack &other) {
            (void)other;
            return (*this);
        }
        iterator begin(void) {
            return (c.begin());
        }
        iterator end(void) {
            return (c.end());
        }
};

#endif