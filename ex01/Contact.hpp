#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:
    std::string name;
    std::string last_name;
    std::string nick;
    std::string number;
    std::string darkest_secret;
    void contact(void);
};

#endif