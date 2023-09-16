/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:01:58 by maclara-          #+#    #+#             */
/*   Updated: 2023/09/02 18:25:56 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

double RPNcalculate(std::string arg)
{
	std::stack<double> rpn;
	int i = 0;

	while (arg[i])
	{
		double number;
		if (arg[i] > 47 && arg[i] < 58)
		{
			std::string str_number;
			while (arg[i] > 47 && arg[i] < 58) {
				str_number += arg[i];
				i++;
			}
			std::istringstream(str_number) >> number;
			rpn.push(number);
		}
		else if (arg[i] == ' ')
			i++;
		else if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
		{
			double number_1;
			double number_2;
			double result;
			if (rpn.size() < 2)
				throw "Error";
			number_2 = rpn.top();
			rpn.pop();
			number_1 = rpn.top();
			rpn.pop();
			if (arg[i] == '+')
				result = number_1 + number_2;
			if (arg[i] == '-')
				result = number_1 - number_2;
			if (arg[i] == '*')
				result = number_1 * number_2;
			if (arg[i] == '/')
				result = number_1 / number_2;
			rpn.push(result);
			i++;
		}
		else
			throw "ERROR: invalid caracter.";
	}
	if (rpn.size() != 1)
		throw "Error: RPN error execution.";
	else
		return (rpn.top());
}
