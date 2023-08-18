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
    this->index = 1;
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

    this->contact[this->index] = cont;
    /* std::cout << this->contact[this->index].getFirstname() << std::endl;
    std::cout << this->contact[0].getFirstname() << std::endl;
    std::cout << this->contact[1].getFirstname() << std::endl;
    std::cout << this->contact[2].getFirstname() << std::endl;
    std::cout << this->contact[3].getFirstname() << std::endl;
    std::cout << this->contact[4].getFirstname() << std::endl;
    std::cout << std::endl;  */
    this->index++;


}

void PhoneBook::findContact(void)
{
    std::string num;
    int number;

    std::cout << "ESCOLHA UM NUMERO: " << std::endl;
    getline(std::cin >> std::ws, num);
    number = mini_atoi(num);
    if(number <= 0)
    {
        std::cout << " ___________________________ " << std::endl;
        std::cout << "|                           |" << std::endl;
        std::cout << "| NUMERO POSITIVO ANIMAL !! |" << std::endl;
        std::cout << "|___________________________|" << std::endl;
        std::cout << std::endl;
    }
    else
    {
        std::cout << "---------------------------" << std::endl;
        std::cout << "   NAME: ";
        std::cout << this->contact[number].getFirstname() << " ";
        std::cout << this->contact[number].getLastname() << std::endl;
        std::cout << "   PHONE: ";
        std::cout << this->contact[number].getPhonenumber() << std::endl;
        std::cout << "---------------------------" << std::endl;
    }
}

int mini_atoi(std::string str)
{
    int num;
    int i;
    int n;

    n = 1;
    num = 0;
    i = 0;
    if (str[i] == '-')
    {
        n = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + str[i] - '0';
        i++;
    }
    return(num * n);
}