/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 04:00:00 by malhendi          #+#    #+#             */
/*   Updated: 2026/08/08 04:00:00 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- Correct polymorphism ---" << std::endl;
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Type: " << dog->getType() << std::endl;
    std::cout << "Type: " << cat->getType() << std::endl;
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    std::cout << "\n--- Virtual destruction ---" << std::endl;
    delete animal;
    delete dog;
    delete cat;

    std::cout << "\n--- Wrong polymorphism ---" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "Type: " << wrongCat->getType() << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();

    std::cout << "\n--- Wrong hierarchy destruction ---" << std::endl;
    delete wrongAnimal;
    delete wrongCat;

    std::cout << "\n--- Canonical form ---" << std::endl;
    Dog original;
    Dog copy(original);
    Dog assigned;
    assigned = original;
    copy.makeSound();
    assigned.makeSound();

    return 0;
}
