/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:05:45 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/24 15:23:20 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	Replacer replacer(argv[1], argv[2], argv[3]);

	if (!replacer.validateInputs()) {
		return 1;
	}

	if (!replacer.replaceStringsInFile()) {
		return 1;
	}

	return (0);
}
