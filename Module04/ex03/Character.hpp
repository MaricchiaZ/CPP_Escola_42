/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:54:07 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/13 09:21:31 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

public:
    Character();
    ~Character();
    Character(std::string const &name);
    Character(Character const &src);
    Character& operator=(Character const &rhs);

    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    AMateria* getMateria(int idx);

private:
    std::string name;
    AMateria *inventory[4];
	void initInventory(void);
	void clearInventory(void);
};

#endif
