/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:04:21 by marolive          #+#    #+#             */
/*   Updated: 2023/08/15 20:04:14 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::contact(void)
{
    std::string name2;

    std::cout << " ________________________________" << std::endl;
    std::cout << "|                                " << std::endl;
    std::cout << "  NAME: ";
    std::getline (std::cin, name2);
    //std::cin >> this->name;
    //std::cout << "| LAST NAME: ";
    std::cin >> this->last_name;
    std::cout << "| NICK NAME: ";
    std::cin >> this->nick;
    std::cout << "| NUMBER PHONE: ";
    std::cin >> this->number;
    std::cout << "| DARKEST SECRET: ";
    std::cin >> this->darkest_secret;
    std::cout << "|________________________________" << std::endl;
}