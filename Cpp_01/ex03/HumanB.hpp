/* ************************************************************************** */
/*                                                                            */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 02:00:00 by malhendi          #+#    #+#             */
/*   Updated: 2026/07/17 02:00:00 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(std::string name);
	void	setWeapon(Weapon &weapon);
	void	attack(void) const;
};

#endif
