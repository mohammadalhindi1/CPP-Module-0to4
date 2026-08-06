/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:00:00 by malhendi          #+#    #+#             */
/*   Updated: 2026/08/06 18:00:00 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- Basic actions ---" << std::endl;
    ClapTrap robot("Hindi");
    robot.attack("Training target");
    robot.takeDamage(4);
    robot.beRepaired(2);

    std::cout << "\n--- Copy and assignment ---" << std::endl;
    ClapTrap copy(robot);
    ClapTrap assigned;
    assigned = robot;
    copy.attack("Copy target");
    assigned.attack("Assignment target");

    std::cout << "\n--- No actions without hit points ---" << std::endl;
    ClapTrap disabled("Disabled");
    disabled.takeDamage(10);
    disabled.attack("Target");
    disabled.beRepaired(5);

    std::cout << "\n--- No actions without energy points ---" << std::endl;
    ClapTrap tired("Tired");
    for (int i = 0; i < 10; ++i)
        tired.attack("Target");
    tired.attack("Target");
    tired.beRepaired(1);

    std::cout << "\n--- Destruction ---" << std::endl;
    return 0;
}
