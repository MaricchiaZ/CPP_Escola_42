/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:59:10 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/28 09:47:55 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{

public:

    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& src);
    Bureaucrat& operator=(const Bureaucrat& src);
    
    Bureaucrat(std::string const name, int grade);

    std::string const getName() const;
    int getGrade() const;
    
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm & aform);
    void executeForm(AForm const & aform);

    class GradeTooHighException: public std::exception
    {
        public:
            const char* what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
        public:
            const char* what() const throw();
    };

private:
    std::string const name;
    int		grade;

};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& var);

#endif
