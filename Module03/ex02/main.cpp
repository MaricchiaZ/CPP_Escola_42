/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:25:42 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/25 20:10:33 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {

	ClapTrap	mini_clap("Mini-clap");
	ScavTrap	big_scav("Big-scav");
	FragTrap	optimized_robot("The Frag");

	std::cout << std::string(80, '-') << std::endl;

	optimized_robot.attack(mini_clap.getName());
	optimized_robot.attack(big_scav.getName());
    
	mini_clap.takeDamage(optimized_robot.getAttackDamage());
	big_scav.takeDamage(optimized_robot.getAttackDamage());
	mini_clap.beRepaired(5);
	big_scav.beRepaired(20);

	big_scav.guardGate();
	big_scav.attack(optimized_robot.getName());

	optimized_robot.attack(mini_clap.getName());
	optimized_robot.attack(big_scav.getName());

	mini_clap.takeDamage(optimized_robot.getAttackDamage());
	big_scav.takeDamage(optimized_robot.getAttackDamage());
	mini_clap.beRepaired(5);
	big_scav.beRepaired(20);
	std::cout << "Big_scav life's points: " << big_scav.getHitPoints() << std::endl;
	std::cout << std::string(80, '-') << std::endl;

	return 0;
}
