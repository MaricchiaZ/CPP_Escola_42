/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:43:21 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/27 08:07:41 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
#define DOG_H

# include <string>
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

public:

    Dog(void);
    ~Dog(void);
    Dog(Dog const &src);
    Dog & operator=(Dog const &src);

    void makeSound(void) const;
    Brain *getBrain(void) const;

private:
	Brain *brain;

};

#endif
