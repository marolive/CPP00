/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:05:31 by marolive          #+#    #+#             */
/*   Updated: 2023/08/17 19:38:52 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    std::string command;
    std::string name;
    Contact cont;
    PhoneBook phone;

    while (42)
    {
        std::cout << "Please, put a command (ADD or SEARCH or EXIT)" << std::endl;
        std::cin >> command;
        if (command =="ADD" or command =="add")
            phone.addContact();
        else if (command == "SEARCH" || command == "search")
        {
            phone.findContact();
            continue;
        }
        else if (command == "EXIT" || command == "exit")
        {
            std::cout << "Valeu Falou!" << std::endl;
            break;
        }
        else
        {
            std::cout << " _______________________________ " << std::endl;
            std::cout << "|                               |" << std::endl;
            std::cout << "| VOCÊ É RETARDADO POR ACASO ?? |" << std::endl;
            std::cout << "|_______________________________|" << std::endl;
            std::cout << std::endl;
        }
    }
    return 0;
}