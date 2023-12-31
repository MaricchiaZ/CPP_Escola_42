/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:25:00 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 08:27:37 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedPointValue(0) {
    std::cout << "Default Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed & src){
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed & Fixed::operator=(Fixed const & src){
    
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->setRawBits(src.getRawBits());
    return *this;
}

void Fixed::setRawBits(int const bits){
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = bits;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}
