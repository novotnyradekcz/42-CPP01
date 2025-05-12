/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:39:09 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/12 11:49:42 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "HumanB " << this->_name << " created." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << this->_name << " destroyed." << std::endl;
}

void HumanB::attack()
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " has no weapon to attack." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
