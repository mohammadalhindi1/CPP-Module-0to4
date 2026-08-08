#include "Character.hpp"
#include <cstddef>

Character::Character() : name("Default")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const std::string& name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character& other) : name(other.name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    copyInventory(other);
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        clearInventory();
        name = other.name;
        copyInventory(other);
    }
    return *this;
}

Character::~Character()
{
    clearInventory();
}

void Character::clearInventory(void)
{
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = NULL;
    }
}

void Character::copyInventory(const Character& other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i] != NULL)
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

const std::string& Character::getName(void) const
{
    return name;
}

void Character::equip(AMateria* materia)
{
    if (materia == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == materia)
            return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = materia;
            return;
        }
    }
}

void Character::unequip(int index)
{
    if (index >= 0 && index < 4)
        inventory[index] = NULL;
}

void Character::use(int index, ICharacter& target)
{
    if (index >= 0 && index < 4 && inventory[index] != NULL)
        inventory[index]->use(target);
}
