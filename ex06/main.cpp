/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:22:38 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/24 18:40:12 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc < 1 || argc > 2)
	{
		std::cout << "Usage: ./harl2 <LEVEL>" << std::endl;
		return (1);
	}
	else
	{
		Harl	harl;
		if (argc == 1)
		{
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
		}
		else
		{
			harl.complain(argv[1]);
		}
	}

	return (0);
}
