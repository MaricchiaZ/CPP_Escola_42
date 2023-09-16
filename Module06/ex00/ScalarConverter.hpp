/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:14:18 by maclara-          #+#    #+#             */
/*   Updated: 2023/08/07 14:18:20 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <cstdlib>
# include <string>
# include <cmath>
# include <climits>
# include <limits>

class ScalarConverter {
    
public:

    ScalarConverter(const std::string input_convert);
    ~ScalarConverter(void);
    char checkInputType(void);

	static void convert(const char value);
	static void convert(const int value);
	static void convert(const float value);
	static void convert(const double value);
    static void convertNothing(void);

	void printError(std::string const& type, std::string msg);
	void printConversion(void);

	class NotConvertible : public std::exception
	{
        public:
            virtual const char *what() const throw();
	};
    
private:

    ScalarConverter(void);
    ScalarConverter(const ScalarConverter &sc);
    ScalarConverter &operator=(const ScalarConverter &sc);

    static std::string input;
    static char _char;
    static int _int;
    static float _float;
    static double _double;
    static bool nothing;
};

#endif
