/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:24:10 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 08:27:51 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    
public:
    Fixed(void);
    ~Fixed(void);
    
    Fixed(Fixed const & src);
    Fixed & operator=(Fixed const & src);

    void setRawBits(int const bits);
    int getRawBits(void) const;
    
private:
    int _fixedPointValue;
    static int const _fractionalBits;
};
#endif
