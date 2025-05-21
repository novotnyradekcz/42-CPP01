/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:22:38 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/21 09:14:07 by rnovotny         ###   ########.fr       */
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
		if (!std::string("DEBUG").compare(argv[1]) || 
			!std::string("INFO").compare(argv[1]) || 
			!std::string("WARNING").compare(argv[1]) || 
			!std::string("ERROR").compare(argv[1]))
		{
			std::cout << "[ " << argv[1] << " ]" << std::endl;	
			harl.complain(argv[1]);
		}
		else
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return (0);
}
