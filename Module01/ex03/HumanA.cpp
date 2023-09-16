/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 08:30:02 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/24 18:05:18 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weaponA(weapon) {
	this->_name = name;
}

HumanA::~HumanA(void) {
    
}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with their weapon " << this->weaponA.getType() << std::endl;
}
