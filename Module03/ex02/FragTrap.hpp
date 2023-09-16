/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:04:12 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 20:11:41 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

    FragTrap(void);
    ~FragTrap(void);
    FragTrap(FragTrap const &src);
    FragTrap &operator=(FragTrap const &src);
    
    FragTrap(std::string name);

    void	attack(std::string const &target);
    void	highFiveGuys(void);

};

#endif
