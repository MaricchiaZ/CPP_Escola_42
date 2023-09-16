/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:25:42 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 20:03:06 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

int	main(void) {

    ClapTrap	a;
    ClapTrap	b;
    a.setName("The-Ant");
    b.setName("The-BIG-BOSS");
    b.setHitPoints(50);
    b.setEnergyPoints(20);

    a.attack(b.getName());
    b.attack(a.getName());

    a.takeDamage(b.getAttackDamage());
    b.takeDamage(a.getAttackDamage());

    a.setAttackDamage(2);
    b.setAttackDamage(8);

    a.attack(b.getName());
    b.attack(a.getName());

    a.beRepaired(3);
    b.beRepaired(21);

    a.attack(b.getName());
    b.attack(a.getName());

    a.takeDamage(b.getAttackDamage());
    b.takeDamage(a.getAttackDamage());

    a.beRepaired(3);
    b.beRepaired(21);

    std::cout << std::endl;
    std::cout << "END OF THE BATTLE" << std::endl;
    std::cout << a.getName() << " has " << a.getHitPoints() << " life's point and " << a.getEnergyPoints() << " energy's point!" << std::endl;
    std::cout << b.getName() << " has " << b.getHitPoints() << " life's point and " << b.getEnergyPoints() << " energy's point!" << std::endl;
    
    std::cout << std::string(80, '-') << std::endl;

    ClapTrap	x1001;
    ClapTrap	x1002;

    x1001.setName("CT-x1001");
    x1002 = x1001;

    x1001.attack(x1002.getName());
    x1002.attack(x1001.getName());

    x1001.takeDamage(x1002.getAttackDamage());
    x1002.takeDamage(x1001.getAttackDamage());

    x1001.setAttackDamage(5);
    x1002.setAttackDamage(5);

    x1001.attack(x1002.getName());
    x1002.attack(x1001.getName());

    x1001.takeDamage(x1002.getAttackDamage());
    x1002.takeDamage(x1001.getAttackDamage());
    x1001.beRepaired(3);
    x1002.beRepaired(21);

    x1001.attack(x1002.getName());
    x1002.attack(x1001.getName());

    x1001.takeDamage(x1002.getAttackDamage());
    x1002.takeDamage(x1001.getAttackDamage());

    x1001.beRepaired(3);
    x1002.beRepaired(21);
    std::cout << std::string(80, '-') << std::endl;

	return 0;
}
