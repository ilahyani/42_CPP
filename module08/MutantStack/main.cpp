/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:47:31 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/05 16:35:46 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    MutantStack<int>::iterator it;
    MutantStack<int>::iterator ite;

    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(44);
    mstack.push(155);
    mstack.push(168);
    mstack.push(1337);
    mstack.push(42);
    mstack.push(134237);
    it = mstack.begin();
    ite = mstack.end();
    std::cout << "[CONTENT]: ";
    while (it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << "\n[TOP]: " << mstack.top() << std::endl;
    std::cout << "[SIZE]: " << mstack.size() << std::endl;
    mstack.pop();
    mstack.pop();
    mstack.pop();
    it = mstack.begin();
    ite = mstack.end();
    std::cout << "[CONTENT]: ";
    while (it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << "\n[TOP]: " << mstack.top() << std::endl;
    std::cout << "[SIZE]: " << mstack.size() << std::endl;
    return 0;
}