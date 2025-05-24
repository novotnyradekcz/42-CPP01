/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:08:59 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/24 15:32:55 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(const std::string& filename, const std::string& s1, const std::string& s2)
	: filename(filename), s1(s1), s2(s2) {}

bool Replacer::validateInputs() const
{
	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return false;
	}
	return true;
}

bool Replacer::replaceStringsInFile() const
{
	std::ifstream infile(filename);
	if (!infile)
	{
		std::cerr << "Error: could not open file " << filename << std::endl;
		return false;
	}

	std::string output;
	std::string line;
	while (std::getline(infile, line))
	{
		if (s1 == "\n")
		{
			output += line + s2;
			continue;
		}
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			std::string before = line.substr(0, pos);
			std::string after = line.substr(pos + s1.length());
			line = before + s2 + after;
			pos += s2.length();
		}
		output += line + "\n";
	}
	infile.close();

	std::string output_file = filename + ".replace";
	std::ofstream outfile(output_file.c_str());
	if (!outfile)
	{
		std::cerr << "Error: could not open file " << output_file << std::endl;
		return false;
	}

	outfile << output;
	outfile.close();
	return true;
}