/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:46:01 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/12 11:46:57 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA " << this->_name << " created." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->_name << " destroyed." << std::endl;
}

void HumanA::attack()
{
	if (this->_weapon.getType().empty())
	{
		std::cout << this->_name << " has no weapon to attack." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}