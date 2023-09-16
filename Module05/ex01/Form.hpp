/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:10:48 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/28 09:44:18 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form{

public:

    Form();
    ~Form();
    Form(const Form &src);
    Form& operator=(const Form &src);

    Form(const std::string name, int gradeToSign, int gradeToExecute);

    std::string getName()const;
    bool getSigned()const;
    int getGradeToSign()const;
    int getGradeToExecute()const;

    void beSigned(Bureaucrat &bureaucrat);

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

    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
    
};

std::ostream & operator<<(std::ostream & o, Form const & Form);

#endif
