/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:47:40 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 08:38:07 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) {
	const_cast<Fixed &>(this->x) = 0;
	const_cast<Fixed &>(this->y) = 0;
}

Point::~Point(void) {
}

Point::Point(Point const &p) {
	*this = p;
}

Point::Point(float const x, float const y) {
	const_cast<Fixed &>(this->x) = x;
	const_cast<Fixed &>(this->y) = y;
}

Point &Point::operator=(const Point &p) {
	const_cast<Fixed  &>(this->x) = p.getX();
	const_cast<Fixed  &>(this->y) = p.getY();
	return (*this);
}

Fixed const Point::getX(void) const {
	return (this->x);
}

Fixed const Point::getY(void) const {
	return (this->y);
}

void	Point::setX(Fixed const x) {
	const_cast<Fixed &> (this->x) = x;
}

void	Point::setY(Fixed const y) {
	const_cast<Fixed &> (this->y) = y;
}
