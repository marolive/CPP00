/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:05:31 by marolive          #+#    #+#             */
/*   Updated: 2023/08/15 20:07:26 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    std::string txt1, txt2;

    std::cout << "texto1: ";
    std::getline(std::cin, txt1);
    std::cout << txt1 << std::endl;
    
    std::cout << "texto2: ";
    std::getline(std::cin, txt2);
    std::cout << txt2 << std::endl;
    /*std::string command;
    std::string name;
    Contact *cont = new Contact();

    while (42)
    {
        std::cout << "Please, put a command (ADD, SEARCH or EXIT)" << std::endl;
        std::cin >> command;
        if (command =="ADD" or command =="add")
            cont->contact();
        else if (command == "SEARCH" || command == "search")
        {
            std::cout << "What is the name?" << std::endl;
            std::cin >> name;
            if (name == cont->name)
            {
                std::cout << "---------------------------" << std::endl;
                std::cout << "   NAME: ";
                std::cout << cont->name << " ";
                std::cout << cont->last_name << std::endl;
                std::cout << "   PHONE: ";
                std::cout << cont->number << std::endl;
                std::cout << "---------------------------" << std::endl;
            }
        }
        else if (command == "EXIT" | command == "exit")
        {
            std::cout << "Valeu Falou!";
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
    }*/
    return 0;
}