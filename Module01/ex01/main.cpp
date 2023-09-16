/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:36:06 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/24 17:59:37 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *tester;

	tester = zombieHorde(10, "horde_in_city");
	for (int i = 0; i < 10; i++) {
		tester[i].announce();
	}
	delete[] tester; 
}
