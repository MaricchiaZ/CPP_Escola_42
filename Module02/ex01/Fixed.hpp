/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:24:10 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 08:29:08 by maclara-         ###   ########.fr       */
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
    
private:
    int _fixedPointValue;
    static int const _fractionalBits;
};

std::ostream &operator <<(std::ostream &out, Fixed const &f);

#endif
