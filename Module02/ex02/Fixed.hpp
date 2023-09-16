/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:24:10 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 08:34:55 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    
public:
    Fixed(void);
    
    Fixed(const int nb);
    Fixed(const float nb);

    ~Fixed(void);
    
    Fixed(Fixed const & src);
    Fixed & operator=(Fixed const & src);

    void setRawBits(int const bits);
    int getRawBits(void) const;
    
    float toFloat(void) const;
    int toInt(void) const;

    bool	operator>(Fixed const& other) const;
    bool	operator<(Fixed const& other) const;
    bool	operator>=(Fixed const& other) const;
    bool	operator<=(Fixed const& other) const;
    bool	operator==(Fixed const& other) const;
    bool	operator!=(Fixed const& other) const;

    Fixed	operator+(Fixed const& other) const;
    Fixed	operator-(Fixed const& other) const;
    Fixed	operator*(Fixed const& other) const;
    Fixed	operator/(Fixed const& other) const;

    Fixed & operator++(void);
    Fixed	operator++(int);
    
    Fixed & operator--(void);
    Fixed	operator--(int);
    
    static Fixed & min(Fixed & f1, Fixed & f2);
    static Fixed const & min(Fixed const & f1, Fixed const & f2);

    static Fixed & max(Fixed & f1, Fixed & f2);
    static Fixed const & max(Fixed const & f1, Fixed const & f2);
    
private:
    int _fixedPointValue;
    static int const _fractionalBits;
};

std::ostream &operator <<(std::ostream &out, Fixed const &f);

#endif
