#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    AMateria* inventory[4];

    void clearInventory(void);
    void copyInventory(const Character& other);

public:
    Character();
    Character(const std::string& name);
    Character(const Character& other);
    Character& operator=(const Character& other);
    ~Character();

    const std::string& getName(void) const;
    void equip(AMateria* materia);
    void unequip(int index);
    void use(int index, ICharacter& target);
};

#endif
