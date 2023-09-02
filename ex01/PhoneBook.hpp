#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    void addContact(void);
    void findContact(void);
private:
    int     index;
    int     count;
    Contact contact[9];
};

std::string truncate(std::string str, size_t len);
int mini_atoi(std::string str);

#endif