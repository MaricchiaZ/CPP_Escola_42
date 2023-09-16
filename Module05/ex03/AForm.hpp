/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:10:48 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/28 09:47:30 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class AForm{

public:

    AForm();
    virtual ~AForm();
    AForm(const AForm &src);
    AForm& operator=(const AForm &src);

    AForm(const std::string name, int gradeToSign, int gradeToExecute);

    void setTarget(std::string target);

    std::string getName()const;
    bool getSigned()const;
    int getGradeToSign()const;
    int getGradeToExecute()const;
    const std::string getTarget(void) const;

    void beSigned(Bureaucrat &bureaucrat);

    virtual void execute(Bureaucrat const & executor) const = 0;

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
    class UnsignedFormException: public std::exception
    {
        public:
            const char* what() const throw();
    };

protected:
    const std::string target;

private:
    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
    
};

std::ostream & operator<<(std::ostream & o, AForm const & AForm);

#endif
