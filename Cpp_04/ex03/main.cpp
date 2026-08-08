#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <cstddef>
#include <iostream>

int main(void)
{
    std::cout << "--- Materia use ---" << std::endl;
    IMateriaSource* source = new MateriaSource();
    source->learnMateria(new Ice());
    source->learnMateria(new Cure());

    ICharacter* hero = new Character("me");
    ICharacter* target = new Character("bob");

    AMateria* ice = source->createMateria("ice");
    AMateria* cure = source->createMateria("cure");
    hero->equip(ice);
    hero->equip(cure);
    hero->use(0, *target);
    hero->use(1, *target);

    std::cout << "\n--- Unknown Materia ---" << std::endl;
    AMateria* unknown = source->createMateria("fire");
    if (unknown == NULL)
        std::cout << "Materia type fire was not learned." << std::endl;

    std::cout << "\n--- Unequip without delete ---" << std::endl;
    AMateria* dropped = source->createMateria("ice");
    hero->equip(dropped);
    hero->unequip(2);
    delete dropped;
    std::cout << "Slot 2 is now empty." << std::endl;

    std::cout << "\n--- Character deep copy ---" << std::endl;
    Character original("original");
    AMateria* originalMateria = source->createMateria("cure");
    original.equip(originalMateria);

    Character copy(original);
    Character assigned("assigned");
    assigned = original;

    original.unequip(0);
    delete originalMateria;
    copy.use(0, *target);
    assigned.use(0, *target);

    delete target;
    delete hero;
    delete source;
    return 0;
}
