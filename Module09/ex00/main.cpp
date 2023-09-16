/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:00:49 by maclara-          #+#    #+#             */
/*   Updated: 2023/09/16 16:15:21 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// execute this code:
//    ./bitcoin exchange.txt

int main(int argc, char *argv[]) {
    int j = 1;
    if (argc == 1)
    {
        std::cout << "INPUT_ERROR: Need file with exchange rate table" << std::endl;
        exit(1);
    }

    BitcoinExchange exchange;
    while(argv[j])
    {
        exchange.MakeExchange(argv[j]);
        j++;
    }
}
