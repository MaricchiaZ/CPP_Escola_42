/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:42:25 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 09:49:51 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	std::cout << "TEST SUBJECT" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;

	std::cout << "OTHER TEST" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "Fixed::min( a, b ): " << Fixed::min( a, b ) << std::endl;
	std::cout << "(a < b): " << (a < b) << std::endl;
	std::cout << "(a > b): " << (a > b) << std::endl;
	std::cout << "(a <= b): " << (a <= b) << std::endl;
	std::cout << "(a >= b): " << (a >= b) << std::endl;
	std::cout << "(a == b): " << (a == b) << std::endl;
	std::cout << "(a != b): " << (a != b) << std::endl;
	std::cout << "(a + b): " << (a + b) << std::endl;
	std::cout << "(a - b): " << (a - b) << std::endl;
	std::cout << "(a / b): " << (a / b) << std::endl;
	std::cout << "(a * b): " << (a * b) << std::endl;
	std::cout << "(--a): " << --a << std::endl;
	std::cout << "(a--): " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;

	return 0;
}
