/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:45:35 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/27 09:01:30 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &src);
    MateriaSource& operator=( MateriaSource const & src);

    AMateria* getMateria( std::string const & type );
    AMateria* createMateria( std::string const & type );
    void learnMateria( AMateria* );

private:
    AMateria*  materias[4];
	void initMaterias(void);
	void clearMaterias(void);
};


#endif
