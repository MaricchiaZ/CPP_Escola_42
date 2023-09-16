/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:22:42 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/24 17:59:23 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name) {
	Zombie*	horde = NULL;

	if (n <= 0) {
		return horde;
	}
	horde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		horde[i].setZombie(name);
	}

	return horde;
}
