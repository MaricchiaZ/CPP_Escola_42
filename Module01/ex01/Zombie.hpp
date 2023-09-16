/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:01:51 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/24 19:07:39 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {   
        
public:

   Zombie();
   ~Zombie();

   void setZombie(std::string zombies_name);
   
   std::string getZombie()const;

   void announce(void);

private:

    std::string _my_name;
};

Zombie*	zombieHorde(int n, std::string name);

#endif
