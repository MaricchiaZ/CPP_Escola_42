/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:36:06 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/24 19:59:18 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

  Zombie* zumbiew = newZombie("zomby");
  zumbiew->announce();
  Zombie* zii = newZombie("zzuummb");
  zii->announce();
  randomChump("szhumbzs");

  delete zumbiew;
  delete zii;
}
