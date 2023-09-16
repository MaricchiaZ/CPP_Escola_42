/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:25:41 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 20:10:05 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {
	std::cout << "FragTrap Default Constructor called🤖" << std::endl;
    setName("FragTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor called: " << getName() << " died! ⚡☠️" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src) {
	std::cout << "FragTrap Copy Constructor called: Creating FragTrap Clone🤖🤖" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &src) {
	std::cout << "FragTrap copy assignment operator called🤖=🤖" << std::endl;
	ClapTrap::operator=(src);
	return *this;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap Constructor called with name: " << name << " 🤖" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

void	FragTrap::attack(std::string const& target) {
	if (target.empty()) {
		std::cout << this->_name << " can't attack... No target!" << std::endl;
		return ;
	}
    if (this->_hitPoints < 1) {
        std::cout << this->_name << " can't attack " << target << ": He is dead! ☠️" << std::endl;
        return ;
    }
    if (this->_energyPoints < 1) {
        std::cout << this->_name << " can't attack " << target << ": No energy!" << std::endl;
        return ;
    }
	std::cout << "FragTrap " << this->getName() << " attacks 💥 " << target << ", causing "
	<< this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void	FragTrap::highFiveGuys(void) {
    if (this->getHitPoints() == 0)
		std::cout << this->getName() << " cannot high five" << " because he is dead! ☠️" << std::endl;
    else
	    std::cout << "FragTrap " << this->getName() << " wants to give you high fives ✋🏼!!!" << std::endl;
}
