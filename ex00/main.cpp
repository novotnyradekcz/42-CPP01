/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 22:34:31 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/11 22:43:07 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie* zombie = newZombie("Zombie1");
	zombie->announce();
	delete zombie;
	randomChump("Zombie2");
	return (0);
}
