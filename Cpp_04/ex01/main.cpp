#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- Animal array ---" << std::endl;
    const int animalCount = 4;
    Animal* animals[animalCount];

    for (int i = 0; i < animalCount / 2; i++)
        animals[i] = new Dog();
    for (int i = animalCount / 2; i < animalCount; i++)
        animals[i] = new Cat();
    for (int i = 0; i < animalCount; i++)
        animals[i]->makeSound();
    for (int i = 0; i < animalCount; i++)
        delete animals[i];

    std::cout << "\n--- Dog deep copy ---" << std::endl;
    Dog firstDog;
    firstDog.setIdea(0, "Protect the house");
    Dog secondDog(firstDog);
    secondDog.setIdea(0, "Chase the ball");

    std::cout << "First dog: " << firstDog.getIdea(0) << std::endl;
    std::cout << "Second dog: " << secondDog.getIdea(0) << std::endl;

    std::cout << "\n--- Cat deep assignment ---" << std::endl;
    Cat firstCat;
    firstCat.setIdea(0, "Sleep on the sofa");
    Cat secondCat;
    secondCat = firstCat;
    secondCat.setIdea(0, "Climb the curtain");

    std::cout << "First cat: " << firstCat.getIdea(0) << std::endl;
    std::cout << "Second cat: " << secondCat.getIdea(0) << std::endl;

    return 0;
}
