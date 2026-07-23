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

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

static std::string	replaceAll(const std::string &text,
		const std::string &s1, const std::string &s2)
{
	std::string	result;
	std::size_t	start;
	std::size_t	found;

	start = 0;
	found = text.find(s1, start);
	while (found != std::string::npos)
	{
		result += text.substr(start, found - start);
		result += s2;
		start = found + s1.length();
		found = text.find(s1, start);
	}
	result += text.substr(start);
	return (result);
}

int	main(int argc, char **argv)
{
	std::ifstream		input;
	std::ofstream		output;
	std::stringstream	buffer;
	std::string			filename;

	if (argc != 4 || std::string(argv[2]).empty())
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	filename = argv[1];
	input.open(filename.c_str());
	if (!input.is_open())
	{
		std::cerr << "Error: cannot open input file." << std::endl;
		return (1);
	}
	output.open((filename + ".replace").c_str());
	if (!output.is_open())
	{
		std::cerr << "Error: cannot create output file." << std::endl;
		return (1);
	}
	buffer << input.rdbuf();
	output << replaceAll(buffer.str(), argv[2], argv[3]);
	input.close();
	output.close();
	return (0);
}
