/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:25:00 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 08:36:43 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedPointValue(0) {
	return;
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed::Fixed(const int nb) {
	this->_fixedPointValue = nb << _fractionalBits;
}

Fixed::Fixed(const float nb) {
	this->_fixedPointValue = static_cast<int>(roundf(nb * (1 << this->_fractionalBits)));
}

Fixed::~Fixed(void) {
	return;
}

void Fixed::setRawBits(int const bits) {
	this->_fixedPointValue = bits;
}

int Fixed::getRawBits(void) const {
	return (this->_fixedPointValue);
}

Fixed &Fixed::operator = (Fixed const &fixed) {
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

bool Fixed::operator< (Fixed const &fixed) const {
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator> (Fixed const &fixed) const {
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const &fixed) const {
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &fixed) const {
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(Fixed const &fixed) const {
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const &fixed) const {
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(Fixed const &fixed) const {
	Fixed ret = (this->toFloat() + fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator-(Fixed const &fixed) const {
	Fixed ret = (this->toFloat() - fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator*(Fixed const &fixed) const {
	Fixed ret = (this->toFloat() * fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator/(Fixed const &fixed) const {
	Fixed ret = (this->toFloat() / fixed.toFloat());
	return (ret);
}

Fixed &Fixed::operator++(void) {
	++this->_fixedPointValue;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	this->_fixedPointValue++;
	return (temp);
}

Fixed &Fixed::operator--(void) {
	--this->_fixedPointValue;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	this->_fixedPointValue--;
	return (temp);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	return (f1 < f2) ? f1 : f2;
}

const Fixed &Fixed::min(Fixed const &f1, Fixed const &f2) {
	return (f1 < f2) ? f1 : f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	return (f1 > f2) ? f1 : f2;
}

const Fixed &Fixed::max(Fixed const &f1, Fixed const &f2) {
	return (f1 > f2) ? f1 : f2;
}

int Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_fractionalBits);
}

float Fixed::toFloat(void) const {
	return (static_cast <float>(this->_fixedPointValue) / (1 << this->_fractionalBits));
}

std::ostream &operator <<(std::ostream &out, Fixed const &f) {
	out << f.toFloat();
	return (out);
}
