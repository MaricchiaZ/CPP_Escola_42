/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:08:30 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/24 21:53:55 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char** argv){

    if (argc != 4){ 
        std::cout << "Error: write ->: ./file <filename> <String> <remplaceString>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    std::string buff;
    std::string::size_type	n;


	std::ifstream file_in;
	file_in.open(argv[1], std::ifstream::in);
	if (file_in.fail()) {
		std::cerr << "Failed to open " << argv[1] << " for reading" << std::endl;
		return 1;
	}
    std::string const	file_out_name = filename += ".replace";
    std::ofstream file_out;
    file_out.open(file_out_name.c_str(), std::ofstream::out);
		if (file_out.fail()) {
		std::cout << "Error creating file" << std::endl;
		return (0);
        }
    
	std::cout << "Done: replacing every occurrence of '" << s1 << "' with '" << s2 << "'" << std::endl;

	while (getline(file_in, buff)) {
		while ((n = buff.find(s1)) != std::string::npos) {
			file_out << buff.substr(0, n);
			buff.erase(0, n + s1.length());
			file_out << s2;
		}
		file_out << buff;
		if (!file_in.eof())
			file_out << std::endl;
	}
    file_in.close();
    file_out.close();
	return 0;
}

/*
make
./file file_in "horta da vovó" "mercado da vila"
*/
