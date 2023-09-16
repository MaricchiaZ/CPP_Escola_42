/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:25:00 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 14:35:04 by maclara-         ###   ########.fr       */
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

Fixed::Fixed(const int nb) {
	std::cout << "Int Constructor called" << std::endl;
	_fixedPointValue = nb;
	_fixedPointValue <<= Fixed::_fractionalBits;
}

Fixed::Fixed(const float nb) {
	std::cout << "Float Constructor called" << std::endl;
	this->_fixedPointValue = roundf(nb * (1 << Fixed::_fractionalBits));
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
    this->_fixedPointValue = bits;
}

int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

float	Fixed::toFloat(void) const {
	return (static_cast <float>(this->_fixedPointValue) / (1 << Fixed::_fractionalBits));
}

int	Fixed::toInt(void) const {
	return _fixedPointValue / (1 << Fixed::_fractionalBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed) {
	o << fixed.toFloat();
	return o;
}
