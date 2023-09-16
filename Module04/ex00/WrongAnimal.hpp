/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:52:52 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/27 10:19:46 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal {

public:

    WrongAnimal(void);
    ~WrongAnimal(void);
    WrongAnimal(WrongAnimal const &src);
    WrongAnimal & operator=(WrongAnimal const &src);

    WrongAnimal(std::string type);

    void setType(std::string type);
    std::string	getType(void) const;
    void	makeSound(void) const;

protected:

    std::string	type;
};

#endif
