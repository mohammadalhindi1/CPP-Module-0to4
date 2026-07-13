#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

static std::string formatField(const std::string &str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

static bool readNonEmpty(const std::string &prompt, std::string &input)
{
    while (true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
            return (false);
        if (!input.empty())
            return (true);
        std::cout << "Field cannot be empty." << std::endl;
    }
}

PhoneBook::PhoneBook() : contactCount(0), nextIndex(0)
{
}

void PhoneBook::addContact()
{
    Contact     contact;
    std::string input;

    if (!readNonEmpty("First name: ", input))
        return;
    contact.setFirstName(input);
    if (!readNonEmpty("Last name: ", input))
        return;
    contact.setLastName(input);
    if (!readNonEmpty("Nickname: ", input))
        return;
    contact.setNickname(input);
    if (!readNonEmpty("Phone number: ", input))
        return;
    contact.setPhoneNumber(input);
    if (!readNonEmpty("Darkest secret: ", input))
        return;
    contact.setDarkestSecret(input);

    contacts[nextIndex] = contact;
    if (contactCount < 8)
        contactCount++;

    nextIndex = (nextIndex + 1) % 8;
    std::cout << "Contact added." << std::endl;
}

void PhoneBook::searchContact() const
{
    std::string input;
    int         index;
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
    if (!std::getline(std::cin, input))
        return;

    if (input.length() != 1 || input[0] < '0' || input[0] > '7')
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    index = input[0] - '0';
    if (index >= contactCount)
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
