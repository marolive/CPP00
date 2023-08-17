/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 09:59:45 by marolive          #+#    #+#             */
/*   Updated: 2023/08/17 20:34:51 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

void PhoneBook::addContact(void)
{
    Contact cont;
    std::string str;

    std::cout << std::endl; 
    std::cout << "FIRST NAME: ";
    getline(std::cin >> std::ws, str);
    cont.setFirstname(str);
    std::cout << "LAST NAME: ";
    getline(std::cin, str);
    cont.setLastname(str);
    std::cout << "NICK NAME: ";
    getline(std::cin, str);
    cont.setNickname(str);
    std::cout << "NUMBER: ";
    getline(std::cin, str);
    cont.setPhonenumber(str);
    std::cout << "DARKESTSECRET: ";
    getline(std::cin, str);
    cont.setDarkestsecret(str);

    std::cout << this->contact[this->index].getLastname();
    this->contact[this->index] = cont;
    std::cout << std::endl; 
    this->index++;


}

void PhoneBook::findContact(void)
{
    Contact con;
    
    std::cout << "---------------------------" << std::endl;
    std::cout << "   NAME: ";
    std::cout << con.getFirstname() << " ";
    std::cout << con.getLastname() << std::endl;
    std::cout << "   PHONE: ";
    std::cout << con.getPhonenumber() << std::endl;
    std::cout << "---------------------------" << std::endl;
}