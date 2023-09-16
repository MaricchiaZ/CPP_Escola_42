/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:58:35 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/27 10:26:23 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
    
public:
    AMateria();
    virtual ~AMateria(void);
    AMateria(AMateria const &src);
    AMateria & operator=(AMateria const &src);
    
    AMateria(std::string const &type);

    std::string const & getType()const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

protected:
    std::string type; 
};

#endif
