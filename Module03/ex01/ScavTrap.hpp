/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:48:04 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 20:06:02 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

    ScavTrap();
    ~ScavTrap();
    ScavTrap(ScavTrap const &src);
    ScavTrap &operator=(ScavTrap const &src);
    
    ScavTrap(std::string name);

    void attack(const std::string &target);
    void guardGate(void);
};

#endif
