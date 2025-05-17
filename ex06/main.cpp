/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:22:38 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/17 15:45:34 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "[ DEBUG ]" << std::endl;
		harl.complain("DEBUG");
		std::cout << "[ INFO ]" << std::endl;
		harl.complain("INFO");
		std::cout << "[ WARNING ]" << std::endl;
		harl.complain("WARNING");
		std::cout << "[ ERROR ]" << std::endl;
		harl.complain("ERROR");
		return (1);
	}
	else
	{
		std::cout << "[ " << argv[1] << " ]" << std::endl;
		harl.complain(argv[1]);
	}

	return (0);
}
