/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:01:14 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/24 19:07:09 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    
}

Zombie::~Zombie(){
    
    std::cout << this->getZombie() << " is dead 💀" << std::endl;
}

void Zombie::setZombie(std::string zombies_name){
   this->_my_name = zombies_name;
   std::cout << zombies_name << " is born 😥" << std::endl;
}

std::string Zombie::getZombie()const{
    return this->_my_name;
}

void Zombie::announce(void){
    std::cout << getZombie() << ": BraiiiiiiinnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
	Zombie* new_zombs = new Zombie();
    new_zombs->setZombie(name);
	return (new_zombs);
}
