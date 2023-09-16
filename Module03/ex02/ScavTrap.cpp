/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:48:06 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 20:10:55 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "ScavTrap Default Constructor called🤖" << std::endl;
    setName("ScavTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor called: " << getName() << " died! ⚡☠️" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	std::cout << "ScavTrap Copy Constructor called: Creating ScavTrap Clone🤖🤖" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
	std::cout << "ScavTrap copy assignment operator called🤖=🤖" << std::endl;
    this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setAttackDamage(src.getAttackDamage());
	this->setEnergyPoints(src.getEnergyPoints());
	return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap Constructor called with name: " << name << " 🤖" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

void	ScavTrap::attack(std::string const& target) {
    if (!this->getHitPoints()){
        std::cout << "ScavTrap " << this->getName() << " cannot attack because he is dead! ☠️" << std::endl;
    }
	else if (this->getEnergyPoints() == 0)
		std::cout << "ScavTrap " << this->getName() << " cannot attack because he is out of energy!"<< std::endl;
        
	else if (target.empty()) {
		std::cout << "ScavTrap " << this->_name << " can't attack... No target!" << std::endl;
		return ;
	}
    else {
	std::cout << "ScavTrap " << this->getName() << " attacks 💥 " << target << ", causing " 
	<< this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
}

void	ScavTrap::guardGate(void) {
    if (!this->getHitPoints()){
        std::cout << "ScavTrap " << this->getName() << " cannot guard gate because he is dead." << std::endl;
    }
    else {
        
	std::cout << "ScavTrap " << this->getName() << " now guards the gate! 🛡️" << std::endl;
    }
}
