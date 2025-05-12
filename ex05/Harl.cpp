/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:20:22 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/12 12:21:36 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl constructor called." << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor called." << std::endl;
}

void Harl::debug()
{
	std::cout << "Debug message." << std::endl;
}

void Harl::info()
{
	std::cout << "Info message." << std::endl;
}

void Harl::warning()
{
	std::cout << "Warning message." << std::endl;
}

void Harl::error()
{
	std::cout << "Error message." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Invalid level." << std::endl;
}
