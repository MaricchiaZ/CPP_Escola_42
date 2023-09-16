/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:25:42 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 20:05:23 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {

	ClapTrap	mini_clap("Mini-clap");
	ScavTrap	big_scav("Big-scav");

	std::cout << std::string(80, '-') << std::endl;

	big_scav.attack(mini_clap.getName());
    
	mini_clap.takeDamage(big_scav.getAttackDamage());
	mini_clap.beRepaired(5);

	big_scav.guardGate();
	big_scav.attack(mini_clap.getName());
	
	mini_clap.takeDamage(big_scav.getAttackDamage());
	big_scav.guardGate();
	std::cout << std::string(80, '-') << std::endl;

	return 0;
}
