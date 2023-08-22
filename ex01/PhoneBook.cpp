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
    this->count = 0;
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

void PhoneBook::addContact(void)
{
    std::string str;
    Contact cont;

    std::cout << std::endl; 
    std::cout << "FIRST NAME: ";
    getline(std::cin >> std::ws, str);
    cont.setFirstname(str);
    std::cout << "LAST NAME: ";
    getline(std::cin >> std::ws, str);
    cont.setLastname(str);
    std::cout << "NICK NAME: ";
    getline(std::cin >> std::ws, str);
    cont.setNickname(str);
    std::cout << "NUMBER: ";
    getline(std::cin >> std::ws, str);
    cont.setPhonenumber(str);
    std::cout << "DARKESTSECRET: ";
    getline(std::cin >> std::ws, str);
    cont.setDarkestsecret(str);
    std::cout << std::endl;

    this->contact[this->index] = cont;
    this->index++;
    this->count++;
    if (this->index > 8)
    {
        this->count = this->index - 1;
        this->index = 1;
    }
}

std::string truncate(std::string str, size_t len)
{
    if(len > 9)
        str = str.substr(0, 9) + '.';
    return (str);
}

void PhoneBook::findContact(void)
{
    std::string num;
    int number;
    int i = 0;


    std::cout << " ___________________________________________" << std::endl;
    std::cout << "|_/\\_*__/\\_*__/\\_ PHONEBOOK __/\\_*_/\\__*_/\\_|" << std::endl;
    //std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|___________________________________________|" << std::endl;
    std::cout << "|" << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRSTNAME" << "|";
    std::cout << std::setw(10) << "LASTNAME" << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    while(i < this->count)
    {
        i++;
        std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << truncate(this->contact[i].getFirstname(), this->contact[i].getFirstname().length()) << "|" << std::setw(10);
        std::cout << truncate(this->contact[i].getLastname(), this->contact[i].getLastname().length()) << "|" << std::setw(10) << truncate(this->contact[i].getNickname(), this->contact[i].getNickname().length());
        std::cout << "|" << std::endl;
    }
   // std::cout << "|___________________________________________|" << std::endl;
    std::cout << " -------------------------------------------" << std::endl;
    std::cout << "CHOOSE AN INDEX: ";
    getline(std::cin >> std::ws, num);
    std::cout << std::endl;
    number = mini_atoi(num);
    if(number < 1 || number > 8)
    {
        std::cout << " _______________________________" << std::endl;
        std::cout << "|                               |" << std::endl;
        std::cout << "| ONLY NUMBERS BETWEEN 1 AND 8! |" << std::endl;
        std::cout << "|_______________________________|" << std::endl;
        std::cout << std::endl; 
    }
    else if(number > this->count)
    {
        std::cout << " ___________________________" << std::endl;
        std::cout << "|                           |" << std::endl;
        std::cout << "| CONTACT DOES NOT EXIST !! |" << std::endl;
        std::cout << "|___________________________|" << std::endl;
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Index: " << number << std::endl;
        std::cout << "First Name: " << this->contact[number].getFirstname() << std::endl;
        std::cout << "Last Name : " << this->contact[number].getLastname() << std::endl;
        std::cout << "Number Phone : " << this->contact[number].getPhonenumber() << std::endl;
        std::cout << "DarkestSecret : " << this->contact[number].getDarkestsecret() << std::endl;
        std::cout << std::endl;
    }
}

int mini_atoi(std::string str)
{
    int num = 0;
    int i = 0;
    int n = 1;

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