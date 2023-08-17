/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:04:21 by marolive          #+#    #+#             */
/*   Updated: 2023/08/17 18:42:21 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    return ;
}

Contact::~Contact()
{
    return ;
}

std::string Contact::getFirstname()
{
    return this->_firstname;
}
std::string Contact::getLastname()
{
    return this->_lastname;
}
std::string Contact::getNickname()
{
    return this->_nickname;
}
std::string Contact::getPhonenumber()
{
    return this->_phonenumber;
}
std::string Contact::getDarkestsecret()
{
    return this->_darkestsecret;
}

void Contact::setFirstname(std::string firstname)
{
    this->_firstname = firstname;
}

void Contact::setLastname(std::string lastname)
{
    this->_lastname = lastname;
}

void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::setPhonenumber(std::string phonenumber)
{
    this->_phonenumber = phonenumber;
}

void Contact::setDarkestsecret(std::string darkestsecret)
{
    this->_darkestsecret = darkestsecret;
}