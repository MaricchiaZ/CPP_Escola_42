/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:02:31 by maclara-          #+#    #+#             */
/*   Updated: 2023/07/04 18:53:10 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Megaphone{

public:

    std::string msg; 
    
    Megaphone(void);
    ~Megaphone(void);
    
    void big_sound(char *mini_sound);
};

Megaphone::Megaphone(void){
    Megaphone::msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return;
}

Megaphone::~Megaphone(void){
    return;
}

void    Megaphone::big_sound(char *mini_sound){
    int i = 0;
    while(mini_sound[i]){
        if (mini_sound[i] >= 'a' && mini_sound[i] <= 'z')
            std::cout << (char)(mini_sound[i] - 32);
        else
            std::cout << mini_sound[i];
        i++;
    }
}

int main(int argc, char **argv)
{
    Megaphone mega;
    int i;

    if (argc == 1){
        std::cout << mega.msg << std::endl;
        return 1;
    }
    i = 1;
    while(argv[i]){
        mega.big_sound(argv[i]);
        std::cout << std::endl;
        i++;
    }
    return 0;
}
