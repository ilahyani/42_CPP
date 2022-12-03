/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:39:25 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/03 17:39:17 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
    int x;

    srand(time(NULL));
    x = rand();
    if (!(x % 5))
        return (std::cout << "new A object generated\n", new A);
    else if (!(x % 3))
        return (std::cout << "new B object generated\n", new B);
    return (std::cout << "new C object generated\n", new C);
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A\n"; 
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n"; 
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n"; 
}

void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A\n";
        a.~A();
    }
    catch (std::bad_cast &e) {}
    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B\n";
        b.~B();
    }
    catch (std::bad_cast &e) {}
    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C\n";
        c.~C();
    }
    catch (std::bad_cast &e) {}
}

int main()
{
    Base* test = generate();
    identify(test);
    identify(*test);
    return 0;
}