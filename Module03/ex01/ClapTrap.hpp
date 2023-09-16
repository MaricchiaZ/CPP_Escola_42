/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:44:53 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 20:05:10 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {

public:

    ClapTrap(void);
    ~ClapTrap(void);
    ClapTrap(ClapTrap const &src);
    ClapTrap &operator=(ClapTrap const &src);

    ClapTrap(std::string name);

    std::string		getName(void) const;
    unsigned int	getHitPoints(void) const;
    unsigned int	getEnergyPoints(void) const;
    unsigned int	getAttackDamage(void) const;

    void	setName(std::string name);
    void	setHitPoints(unsigned int hitPoints);
    void	setEnergyPoints(unsigned int energyPoints);
    void	setAttackDamage(unsigned int attackDamage);

    void	attack(std::string const &target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);

protected:

    std::string		_name;
    unsigned int	_hitPoints;
    unsigned int	_energyPoints;
    unsigned int	_attackDamage;

};

#endif
