/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:32:12 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/28 09:40:30 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
}

Intern::~Intern(void) {
}

Intern::Intern(const Intern &intern) {
	*this = intern;
}

Intern& Intern::operator=(const Intern &intern) {
	(void)intern;
 	return (*this);
}

AForm* Intern::makeForm(const std::string name, const std::string target) {
	std::string typesForms[3] = {
        "presidential request",
        "robotomy request",
        "shrubbery request",
    };
	AForm* (Intern::*forms[3])(const std::string) const = {
        &Intern::createPresidentialForm,
		&Intern::createRobotomyForm,
		&Intern::createShrubberyForm};

	for (int i = 0; i < 3; i++) {
		if (typesForms[i].compare(name) == 0) {
			std::cout << "Intern creates " << typesForms[i] << std::endl;
			return ((this->*forms[i])(target));
		}
	}
	throw InvalidFormException();
	return (NULL);
}

AForm *Intern::createShrubberyForm(const std::string target) const {
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::createRobotomyForm(const std::string target) const {
	return (new RobotomyRequestForm(target));
}

AForm* Intern::createPresidentialForm(const std::string target) const {
  	return (new PresidentialPardonForm(target));
}

const char* Intern::InvalidFormException::what(void) const throw() {
  return ("Non-existent form!!!");
}
