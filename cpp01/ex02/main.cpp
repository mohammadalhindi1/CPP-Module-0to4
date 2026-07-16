/* ************************************************************************** */
/*                                                                            */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42amman.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 02:00:00 by malhendi          #+#    #+#             */
/*   Updated: 2026/07/17 02:00:00 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = brain;

	stringPTR = &brain;
	std::cout << "String address:   " << &brain << std::endl;
	std::cout << "Pointer address:  " << stringPTR << std::endl;
	std::cout << "Reference address:" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String value:   " << brain << std::endl;
	std::cout << "Pointer value:  " << *stringPTR << std::endl;
	std::cout << "Reference value:" << stringREF << std::endl;
	return (0);
}
