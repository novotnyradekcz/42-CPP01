/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:30:08 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/12 10:30:29 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* horde = zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}