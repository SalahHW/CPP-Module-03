/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 04:39:06 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/06 05:31:36 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap " << name << " constructed" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " destructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	*this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	this->name = src.name;
	this->hit_point = src.hit_point;
	this->energy_point = src.energy_point;
	this->attack_damage = src.attack_damage;
	std::cout << "ScavTrap copy done" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_point != 0)
	{
		std::cout << "ScavTrap " << this->name << " attack " << target
			<< ", causing " << this->attack_damage << " points of damage!"
			<< std::endl;
		this->energy_point--;
	}
	else
		std::cout << "ScavTrap " << this->name << " has no energy point left!"
			<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode" << std::endl;
}
