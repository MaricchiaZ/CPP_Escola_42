/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:46:21 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/28 09:37:30 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main(void) {

    std::cout << std::string(80, '-') << std::endl;
    
    std::cout << "1. Instantiate a Bureaucrat - grade 0" << std::endl;
    try {
        Bureaucrat best("Best", 0);
    }
    catch(std::exception& e) {
        std::cout << "ERROR: Grade too high! (Grade 1 - 150)" << std::endl;
    }
    std::cout << std::string(80, '-') << std::endl;
    std::cout << "2. Instantiate a Bureaucrat - grade 200" << std::endl;
    try {
        Bureaucrat worst("Worst", 200);
    }
    catch(std::exception& e) {
        std::cout << "ERROR: Grade too low! (Grade 1 - 150)" << std::endl;
    }
    std::cout << std::string(80, '-') << std::endl;
	Bureaucrat high("High", 1);
	Bureaucrat low("Low", 150);
	Bureaucrat medium("Medium", 75);

	std::cout << std::endl;
    std::cout << "3. Show bureaucrat grade:" << std::endl;
	std::cout << high;
	std::cout << medium;
	std::cout << low;
	std::cout << std::endl;

    std::cout << "4. Testing grade too high:" << std::endl;
	try {
		high.incrementGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << "\n";
	}
    std::cout << "5. Testing grade too low:" << std::endl;
	try {
		low.decrementGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << "\n";
	}
    std::cout << std::string(80, '-') << std::endl;
}
