/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:49:58 by maclara-          #+#    #+#             */
/*   Updated: 2023/08/07 20:26:35 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Base.hpp"
#include "Derived.hpp"
#include "Identify.hpp"

class D: public Base{
};

Base*   generate( void ) {
    int i = rand();
    if (i % 3 == 0 )
        return (new A);
    else if (i % 3 == 1)
        return (new B);
    else
        return (new C);
}

int main (void) {
	Base *random = generate();
	A *a = new A();
	B *b = new B();
	C *c = new C();
	D *d = new D();
	A *e = NULL;

    std::cout << std::string(30, '-') << std::endl;
    
	std::cout << "👉 Type A test:" << std::endl;
	identify(a);
	identify(*a);
    std::cout << std::endl;

	std::cout << "👉 Type B test:" << std::endl;
	identify(b);
	identify(*b);
    std::cout << std::endl;

	std::cout << "👉 Type C test:" << std::endl;
	identify(c);
	identify(*c);
    std::cout << std::endl;

	std::cout << "👉 Random type test:" << std::endl;
	identify(random);
	identify(*random);
    std::cout << std::endl;

	std::cout << "👉 Unknow type test:" << std::endl;
	identify(e);
	identify(*d);
    std::cout << std::string(30, '-') << std::endl;

	delete (a);
	delete (b);
	delete (c);
	delete (random);
	delete (d);

  	return (0);
}
