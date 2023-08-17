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
    Contact contact[8];
};

#endif