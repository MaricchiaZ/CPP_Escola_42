/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:18:16 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 20:09:13 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Default Constructor called🤖" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor called: " << getName() << " died! ⚡☠️" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src):
	_name(src.getName()),
	_hitPoints(src.getHitPoints()),
	_energyPoints(src.getEnergyPoints()),
	_attackDamage(src.getAttackDamage()) {
	std::cout << "ClapTrap Copy Constructor called: Creating ClapTrap Clone🤖🤖"
	<< std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &src) {
	std::cout << "ClapTrap copy assignment operator called🤖=🤖" << std::endl;
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return *this;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Parameter Constructor called with name: " << name << " 🤖" << std::endl;
}

void	ClapTrap::setName(std::string name){
    this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitPoints){
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
}
void	ClapTrap::setAttackDamage(unsigned int attackDamage) {
	this->_attackDamage = attackDamage;
}

std::string	ClapTrap::getName(void) const{
     return _name;
}

unsigned int ClapTrap::getHitPoints(void) const{
    return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const{
    return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const{
    return _attackDamage;
}

void	ClapTrap::attack(std::string const &target) { 
	if (target.empty()) {
		std::cout << "ClapTrap " << this->_name << " can't attack... No target!" << std::endl;
		return ;
	}
    if (this->_hitPoints < 1) {
        std::cout << "ClapTrap " << this->_name << " can't attack " << target << ": He is dead! ☠️" << std::endl;
        return ;
    }
    if (this->_energyPoints < 1) {
        std::cout << "ClapTrap " << this->_name << " can't attack " << target << ": No energy!" << std::endl;
        return ;
    }
	std::cout << "ClapTrap " << this->_name << " attacks 💥 " << target << ", causing "
	<< this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!this->_hitPoints) {
		std::cout << "ClapTrap " << this->_name << " can't take damage: He is already dead! ☠️" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage 💔 !"
	<< std::endl;
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
    if (!this->_hitPoints) {
    std::cout << this->_name << " can't be repaired: He is already dead! ☠️" << std::endl;
    return ;
	}
    if (this->_energyPoints < 1) {
        std::cout << this->_name << " can't be repaired: No energy!" << std::endl;
        return ;
    }
	std::cout
	<< "ClapTrap " << this->_name << " is being repaired 🛠️  and receives " << amount << " health." << std::endl;
	this->_energyPoints--;
}
