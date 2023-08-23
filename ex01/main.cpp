/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:05:31 by marolive          #+#    #+#             */
/*   Updated: 2023/08/23 19:30:56 by marolive         ###   ########.fr       */
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
        std::cout << "Please, put a command (ADD or SEARCH or EXIT): ";
        std::cin >> command;
        if(std::cin.eof())
            return 0;
        if (command =="ADD")
            phone.addContact();
        else if (command == "SEARCH")
            phone.findContact();
        else if (command == "EXIT")
        {
            std::cout << std::endl;
            std::cout << "PHONEBOOK CLOSED..." << std::endl;
            break;
        }
        else
        {
            std::cout << std::endl;
            std::cout << " _______________________________ " << std::endl;
            std::cout << "|                               |" << std::endl;
            std::cout << "| JUST ADD or SEARCH or EXIT !! |" << std::endl;
            std::cout << "|_______________________________|" << std::endl;
            std::cout << std::endl;
        }
    }
    return 0;
}