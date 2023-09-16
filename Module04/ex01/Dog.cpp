/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:37:58 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/27 10:20:55 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {
	std::cout << "Dog Default Constructor called  🐶" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor called 🐶☠️" << std::endl;
	delete this->brain;
}

Dog::Dog(Dog const &src): Animal("Dog") {
	std::cout << "Dog Copy Constructor called 🐶 🐶" << std::endl;
	this->brain = new Brain(*src.getBrain());
    *this = src;
}

Dog &Dog::operator=(Dog const &src) {
    this->type = src.getType();
	*this->brain = *src.getBrain();
	std::cout << "Dog copy assignment operator called 🐶=🐶" << std::endl;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "* Auau rrr auau 🐶 🎵 *" << std::endl;
}

Brain* Dog::getBrain(void) const {
	return (this->brain);
}
