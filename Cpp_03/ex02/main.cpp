/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 01:30:00 by malhendi          #+#    #+#             */
/*   Updated: 2026/08/05 01:30:00 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "--- Construction order ---" << std::endl;
    ClapTrap basic("Basic");
    ScavTrap guard("GateGuard");
    FragTrap fighter("HighFiver");

    std::cout << "\n--- ClapTrap actions ---" << std::endl;
    basic.attack("Training target");
    basic.takeDamage(4);
    basic.beRepaired(2);

    std::cout << "\n--- ScavTrap inherited and special actions ---" << std::endl;
    guard.attack("Intruder");
    guard.takeDamage(35);
    guard.beRepaired(10);
    guard.guardGate();

    std::cout << "\n--- FragTrap inherited and special actions ---"
        << std::endl;
    fighter.attack("Training dummy");
    fighter.takeDamage(40);
    fighter.beRepaired(15);
    fighter.highFivesGuys();

    std::cout << "\n--- FragTrap copy and assignment ---" << std::endl;
    FragTrap copy(fighter);
    FragTrap assigned;
    assigned = fighter;
    copy.attack("Copy target");
    assigned.highFivesGuys();

    std::cout << "\n--- No actions without hit points ---" << std::endl;
    FragTrap disabled("Disabled");
    disabled.takeDamage(100);
    disabled.attack("Target");
    disabled.beRepaired(10);
    disabled.highFivesGuys();

    std::cout << "\n--- Destruction order ---" << std::endl;
    return 0;
}
