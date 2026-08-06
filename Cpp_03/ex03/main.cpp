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

#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "--- Diamond construction and identity ---" << std::endl;
    DiamondTrap diamond("Hindi");
    diamond.whoAmI();

    std::cout << "\n--- Inherited statistics and abilities ---" << std::endl;
    diamond.attack("Training target");
    diamond.takeDamage(40);
    diamond.beRepaired(15);
    diamond.guardGate();
    diamond.highFivesGuys();

    std::cout << "\n--- Copy and assignment ---" << std::endl;
    DiamondTrap copy(diamond);
    DiamondTrap assigned;
    assigned = diamond;
    copy.whoAmI();
    assigned.whoAmI();
    copy.attack("Copy target");

    std::cout << "\n--- No actions without hit points ---" << std::endl;
    DiamondTrap disabled("Disabled");
    disabled.takeDamage(100);
    disabled.attack("Target");
    disabled.beRepaired(10);

    std::cout << "\n--- Diamond destruction order ---" << std::endl;
    return 0;
}
