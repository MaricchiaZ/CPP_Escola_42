/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:47:31 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 08:38:28 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

public:
    Point(void);
    ~Point(void);
    Point(Point const &p);
    Point &operator=(Point const &p);

    Point(float const x, float const y);

    Fixed const getX(void) const;
    Fixed const getY(void) const;
    void setX(Fixed const x);
    void setY(Fixed const y);

private:
    Fixed const x;
    Fixed const y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
