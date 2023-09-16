/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:41:41 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/27 11:37:53 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	std::cout << "Test Polymorphism Class - Animal Class has a virtual method makeSound" << std::endl << std::endl;
	const Animal* meta = new Animal();
	std::cout << " Animal class (base) recive a Dog class (derived)" << std::endl;
	const Animal* j = new Dog();
	std::cout << " Animal classa(base) recive a Cat class (derived)" << std::endl;
	const Animal* i = new Cat();

	std::cout << std::string(80, '-') << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << j->getType() << " " << std::endl;
	std::cout << "j->makeSound():  Dog class makeSound is call to pointer base class" << std::endl;
	j->makeSound();
	std::cout << "i->makeSound():  Cat class makeSound is call to pointer base class" << std::endl;
	std::cout << i->getType() << " " << std::endl;
    i->makeSound();
	std::cout << std::endl;
	std::cout << std::string(80, '-') << std::endl;
	std::cout << "WrongAnimal Class DONT HAS a virtual method makeSound" << std::endl << std::endl;

	const WrongAnimal* test = new WrongAnimal();
	const WrongAnimal* test2 = new WrongCat();
	std::cout << std::endl;
    
	std::cout << test->getType() << std::endl;
	test->makeSound();
	std::cout << test2->getType() << std::endl;
	std::cout << "test2->makeSound(); Wrongcat class makeSound ir predominant at WrongCat, because his method isn't virtual" << std::endl;

	test2->makeSound();

	std::cout << std::string(80, '-') << std::endl;

	delete i;
	delete j;
	delete meta;
	delete test;
	delete test2;

	return 0;
}
