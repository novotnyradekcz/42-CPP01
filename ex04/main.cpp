/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:05:45 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/12 12:06:24 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cerr << "Error: could not open file " << argv[1] << std::endl;
		return (1);
	}

	std::string line;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string output;

	while (std::getline(infile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		output += line + "\n";
	}

	infile.close();

	std::ofstream outfile(argv[1]);
	if (!outfile)
	{
		std::cerr << "Error: could not open file " << argv[1] << std::endl;
		return (1);
	}

	outfile << output;
	outfile.close();

	return (0);
}