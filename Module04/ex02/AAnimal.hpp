/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:42:04 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/27 10:25:01 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

# include <string>
# include <iostream>


class AAnimal {

public:

    AAnimal(void);
    virtual ~AAnimal(void);
    AAnimal(AAnimal const &src);
    AAnimal&	operator=(AAnimal const &src);

    AAnimal(std::string type);
    
    void setType(std::string type);
    std::string	getType(void) const;

    virtual void	makeSound(void) const = 0;

protected:

    std::string	type;

};

#endif
