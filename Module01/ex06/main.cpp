/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:05:45 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/24 19:10:59 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Harl.hpp"

int	main(int argc, char* argv[]) {
	Harl harl;

	if (argc != 2) {
		harl.complain("");
		return 1;
	}
	harl.complain(argv[1]);
	
	return 0;
}

/* 
tente: "./Harl "  ou   "./Harl WARNING"

./Harl 

./Harl WARNING

./Harl INFO

./Harl DEBUG

./Harl ERROR

*/
