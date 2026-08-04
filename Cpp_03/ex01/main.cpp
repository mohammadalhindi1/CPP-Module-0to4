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

#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "--- Construction order ---" << std::endl;
    ClapTrap basic("Basic");
    ScavTrap guard("GateGuard");

    std::cout << "\n--- ClapTrap actions ---" << std::endl;
    basic.attack("Training target");
    basic.takeDamage(4);
    basic.beRepaired(2);

    std::cout << "\n--- ScavTrap inherited and special actions ---" << std::endl;
    guard.attack("Intruder");
    guard.takeDamage(35);
    guard.beRepaired(10);
    guard.guardGate();

    std::cout << "\n--- Copy and assignment ---" << std::endl;
    ScavTrap copy(guard);
    ScavTrap assigned;
    assigned = guard;
    copy.attack("Copy target");
    assigned.guardGate();

    std::cout << "\n--- Destruction order ---" << std::endl;
    return 0;
}
