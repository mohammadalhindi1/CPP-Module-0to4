#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

static std::string formatField(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

static std::string readNonEmpty(std::string prompt)
{
    std::string input;

    while (input.empty())
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Field cannot be empty." << std::endl;
    }
    return (input);
}

PhoneBook::PhoneBook()
{
    contactCount = 0;
    nextIndex = 0;
}

void PhoneBook::addContact()
{
    contacts[nextIndex].setFirstName(readNonEmpty("First name: "));
    contacts[nextIndex].setLastName(readNonEmpty("Last name: "));
    contacts[nextIndex].setNickname(readNonEmpty("Nickname: "));
    contacts[nextIndex].setPhoneNumber(readNonEmpty("Phone number: "));
    contacts[nextIndex].setDarkestSecret(readNonEmpty("Darkest secret: "));

    if (contactCount < 8)
        contactCount++;

    nextIndex = (nextIndex + 1) % 8;
    std::cout << "Contact added." << std::endl;
}

void PhoneBook::searchContact() const
{
    std::string input;
    int         index;
    std::stringstream ss;
    int         i;

    if (contactCount == 0)
    {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "index" << "|"
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nickname" << std::endl;

    i = 0;
    while (i < contactCount)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
        i++;
    }

    std::cout << "Enter index: ";
    std::getline(std::cin, input);

    ss << input;
    if (!(ss >> index) || index < 0 || index >= contactCount)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}