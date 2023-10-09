/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:42:04 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/09 07:42:43 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.hpp>

int	replace_and_copy(std::string filename, std::ifstream& file, std::string s1, std::string s2)
{
	std::ofstream out(filename + ".replaced");
	if (!out)
	{
		std::cout << "Couldn't open " << filename + ".replaced" << std::endl;
		return (1);
	}
	std::string line;
	while(std::getline(file, line))
	{
		// std::cout << line << std::endl;
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		// std::cout << "line after: " << line << std::endl;
		out << line << '\n';
	}
	out.close();
	return(0);
}

int	main(int argc, char *argv[])
{
	if (argc < 4)
		std::cout << "Wrong amount of parameters" << std::endl;
	else
	{
		std::string filename = argv[1];
		std::ifstream file(filename);
		if (!file.is_open())
		{
			std::cout << "Couldn't open " << filename << std::endl;
			return (1);
		}
		if (replace_and_copy(filename, file, argv[2], argv[3]) == 1)
			return (1);
		file.close();
	}
	return (0);
}
