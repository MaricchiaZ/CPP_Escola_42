/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:25:00 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 14:39:07 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedPointValue(0) {
    return;
}

Fixed::Fixed(const Fixed & src){
    *this = src;
    return;
}

Fixed::Fixed(const int nb) {
	_fixedPointValue = nb;
	_fixedPointValue <<= Fixed::_fractionalBits;
}

Fixed::Fixed(const float nb) {
	this->_fixedPointValue = roundf(nb * (1 << Fixed::_fractionalBits));
}

Fixed::~Fixed(){
    return;
}

void Fixed::setRawBits(int const bits){
    this->_fixedPointValue = bits;
}

int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

Fixed & Fixed::operator=(Fixed const & src){

    if (this != &src)
        this->setRawBits(src.getRawBits());
    return *this;
}

bool	Fixed::operator>(Fixed const & src) const {
	return _fixedPointValue > src.getRawBits();
}

bool	Fixed::operator<(Fixed const & src) const {
	return _fixedPointValue < src.getRawBits();
}

bool	Fixed::operator>=(Fixed const & src) const {
	return _fixedPointValue >= src.getRawBits();
}

bool	Fixed::operator<=(Fixed const & src) const {
	return _fixedPointValue <= src.getRawBits();
}

bool	Fixed::operator==(Fixed const & src) const {
	return _fixedPointValue == src.getRawBits();
}

bool	Fixed::operator!=(Fixed const & src) const {
	return _fixedPointValue != src.getRawBits();
}

Fixed	Fixed::operator+(Fixed const & src) const {
	Fixed	result;

	result.setRawBits(_fixedPointValue + src.getRawBits());

	return result;
}

Fixed	Fixed::operator-(Fixed const & src) const {
	Fixed	result;

	result.setRawBits(_fixedPointValue - src.getRawBits());

	return result;
}

Fixed	Fixed::operator*(Fixed const & src) const {
	return Fixed(toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const & src) const {
	return Fixed(toFloat() / src.toFloat());
}

Fixed &	Fixed::operator++(void) {
	this->_fixedPointValue += 1;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	result(*this);
	++(*this);
	return result;
}

Fixed &	Fixed::operator--(void) {
	this->_fixedPointValue -= 1;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	result(*this);
	--(*this);
	return result;
}

Fixed &	Fixed::min(Fixed & f1, Fixed & f2) {
	return (f1 < f2) ? f1 : f2;
}

Fixed const & Fixed::min(Fixed const & f1, Fixed const & f2) {
	return (f1 < f2) ? f1 : f2;
}

Fixed &	Fixed::max(Fixed & f1, Fixed & f2) {
	return (f1 > f2) ? f1 : f2;
}

Fixed const & Fixed::max(Fixed const & f1, Fixed const & f2) {
	return (f1 > f2) ? f1 : f2;
}

float	Fixed::toFloat(void) const {
	return (float) _fixedPointValue / (1 << Fixed::_fractionalBits);
}

int	Fixed::toInt(void) const {
	return (static_cast <float>(this->_fixedPointValue) / (1 << Fixed::_fractionalBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed) {
	o << fixed.toFloat();
	return o;
}
